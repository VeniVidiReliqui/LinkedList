/*
 * List.cpp
 * Name: Benjamin Hunt
 *
 * November 19, 2013
 */

#include <iostream>
#include "List.h"
#include <cmath>

using namespace std;

/* FILL IN YOUR IMPLEMENTATION HERE */


List::List() :
    length(0), head(NULL) {
}

List::List(const List& other){
  this->length = 0;
  this->head = NULL;
  node_t* curNode = other.head;
  //loops through all elements of other
  while (curNode != NULL){
    //copies elements over to this->list
    pushEnd(curNode->value);
    curNode = curNode->next;
  }
}

List::List(int length, int value){
  //initialize length at 0
  this->length = 0;
  //initialize head to NULL
  this->head = NULL;
  //loop and pushEnd(value) length times
  for (int i = 0; i < length; i++){
    pushEnd(value);
  }
}

List::~List() {
  node_t* curNode = head;
  while (curNode != NULL) {
    //save node to be deleted
    node_t* delNode = curNode;
    //save pointer saved in node to delete
    curNode = curNode->next;
    //delete node
    delete delNode;
  }
}

int List::size(){
  //return private variable that holds list size
  return length;
}

int List::getFirst(){
  //check to see if list is empty
  if (head == NULL){
    return 0;
  }
  //return value of head (first element)
  return head->value;
}

int List::getLast(){
  //check to see if list is empty
  if (head == NULL){
    return 0;
  }
  node_t* curNode = head;
  //progress to final node
  while (curNode->next != NULL){
    curNode = curNode->next;
  }
  //pring value of final node
  return curNode->value;
}

int List::at(int n){
  //check for negative entry
  if (n < 0){
    //compensate for negative number
    n = length + n;
  }
  //check if n is valid
  if (n >= length){
    return 0;
  }
  node_t* curNode = head;
  //count controls number of iterations to get to index n
  int count = 0;
  //move to node index n
  while (count < n){
    curNode = curNode->next;
    count++;
  }
  return curNode->value;
}

bool List::setNth(int n, int value){
  //check for negative number
  if (n < 0){
    n = length + n;
  }
  //check if n is valid
  if (n >= length){
    return 0;
  }
  node_t* curNode = head;
  int count = 0;
  //progress to node n
  while (count < n){
    curNode = curNode->next;
    count++;
  }
  //change node value
  curNode->value = value;
  return true;
}

bool List::insertNth(int n, int value){
  //compensate for negative n
  if (n < 0){
    n = length + n;
  }
  //check if n is valid
  if (n >= length){
    return 0;
  }
  node_t* curNode = head;
  int count = 0;
  //progress to nth node
  while (count < n){
    curNode = curNode->next;
    count++;
  }
  //create a node at index n+1 of node n's value
  node_t* newNode = createNode(curNode->value,curNode->next);
  //change node n's value to value
  curNode->value = value;
  //make node n point to the new node
  curNode->next = newNode;
  return true;
}

int List::deleteNth(int n){
  //check and compensates for negative numbers
  if (n < 0){
    n = length + n;
  }
  //checks for valid number
  if (n >= length){
    return 0;
  }
  //popFront if index is 0
  if (n == 0){
    return this->popFront();
  }
  node_t* curNode = head;

  //gets node before node to delete
  for (int i = 0; i < n - 1; i++){
    curNode = curNode->next;
  }


  //saves node left of delete
  node_t* leftNode = curNode;
  curNode = curNode->next;

  //gets node to delete
  node_t* delNode = curNode;
  curNode = curNode->next;
  //point node to left to node after delete
  leftNode->next = curNode;
  int ret = delNode->value;
  delete delNode;
  length--;
  return ret;

}

void List::append(const List& other){
  node_t* curNode = other.head;
  //pushEnd each node from other to this->list
  while (curNode != NULL){
    this->pushEnd(curNode->value);
    curNode = curNode->next;
  }
}

List List::mesh(const List& other){
  //create new list to return
  List p;
  node_t* otherNode = other.head;
  node_t* curNode = this->head;
  //check if this->list is empty
  if (this->head == NULL){
    p.append(other);
    return p;
  }
  //check if other is empty
  if (other.head == NULL){
    while (curNode != NULL){
      p.pushEnd(curNode->value);
      curNode = curNode->next;
    }
    return p;
  }
  //loop through both until other list is done
  if (this->length >= other.length){
    while (otherNode != NULL){
      //add this->list element
      p.pushEnd(curNode->value);
      //add other list element
      p.pushEnd(otherNode->value);
      curNode = curNode->next;
      otherNode = otherNode->next;
    }
    //add rest of this->list
    while (curNode != NULL){
      p.pushEnd(curNode->value);
      curNode = curNode->next;
    }
  }
  //loop through both until this->list is done
  if (this->length < other.length){
    while (curNode != NULL){
      p.pushEnd(curNode->value);
      p.pushEnd(otherNode->value);
      curNode = curNode->next;
      otherNode = otherNode->next;
    }
    //add rest of other list
    while (otherNode != NULL){
      p.pushEnd(otherNode->value);
      curNode = otherNode->next;
    }
  }
  //return final list object
  return p;
}

bool List::contains(int value){
  node_t* curNode = head;
  //loop through entire list
  while (curNode != NULL){
    //check if the node is equal to value
    if (curNode->value == value){
      return true;
    }
    //move to next node
    curNode = curNode->next;
  }
  return false;
}

bool List::containsAll(const List& other){
  node_t* curNode = other.head;
  //loop through all nodes in other
  while (curNode != NULL){
    //check if this->list does not contain the node value of other
    if (contains(curNode->value) == false){
      return false;
    }
    curNode = curNode->next;
  }
  return true;
}

bool List::equals(const List& other){
  node_t* otherNode = other.head;
  node_t* thisNode = this->head;
  //check if lists are different lengths
  if (this->length != other.length){
    return false;
  }
  //loop through each element in both lists
  while (thisNode->next != NULL){
    //compare nodes at same index in both lists
    if (thisNode->value != otherNode->value){
      return false;
    }
    //iterate both nodes
    thisNode = thisNode->next;
    otherNode = otherNode->next;
  }
  return true;
}

int List::popEnd(){
  //check if list is empty
  if (head == NULL){
    return 0;
  }
  //checks if list is only one element
  if (length == 1){
    node_t* curNode = head;
    //saves value of node to delete
    int val = curNode->value;
    //sets head to NULL
    head = NULL;
    length--;
    delete curNode;
    return val;
  }
  int ret;
  node_t* curNode = head;
  //loops to the final element
  for (int i = 0; i < length - 2; i++){
    curNode = curNode->next;
  }
  node_t* tempNode = curNode;
  curNode = curNode->next;
  //saves value to return
  ret = curNode->value;

  node_t* delNode = curNode;
  //makes node before last point to NULL
  tempNode->next = NULL;
  delete delNode;
  length--;
  return ret;
}

int List::popFront(){
  //checks if list is empty
  if (head == NULL){
    return 0;
  }
  //saves value to return
  int ret = this->getFirst();
  node_t* delNode = head;
  //sets head to point to second element
  head = delNode->next;
  //delete first element
  delete delNode;
  length--;
  return ret;
}

node_t* List::createNode(int value, node_t* next) {
  //grabs more memory for a new node
  node_t* newNode = new node_t;
  //sets node value and pointer
  newNode->value = value;
  newNode->next = next;
  //increments length
  length++;
  return newNode;
}

void List::pushEnd(int value) {
  //checks for empty list
  if (head == NULL) {
    //creates list
    head = createNode(value,NULL);
    return;
  }

  node_t* curNode = head;
  //loops to end node
  while (curNode->next != NULL) {
    curNode = curNode->next;
  }
  //makes old final node point to new final node
  curNode->next = createNode(value,NULL);
  return;
}

void List::pushFront(int value) {
  //checks for empty list
  if (head == NULL) {
    head = createNode(value,NULL);
    return;
  }
  //creates node that points to head
  node_t* curNode = createNode(value,head);
  //sets head to point to new node
  head = curNode;
  return;
}

void List::printList() {
  //prints NULL if empty list
  if (head == NULL) {
    cout << "NULL" << endl;
    return;
  }
  //places beginning bracket
  cout << "[";
  node_t* curNode = head;
  //prints each node value in order
  while (curNode->next != NULL){
    cout << curNode->value;
    cout << ", ";
    curNode = curNode->next;
  }
  //creates ending bracket
  cout << curNode->value << "]" << endl;
  return;
};

