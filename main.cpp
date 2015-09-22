/*
 * main.cpp
 * Name: Benjamin Hunt
 *
 * This file has NO PURPOSE, other than allowing you to 'play'
 * with your List(s) and verify operation.  What you do here
 * will probably be what you should put in your unit tests!
 *
 * Nov 19 ,2013
 */

#include <iostream>

#include "List.h"

using namespace std;

int main(int argc, char* argv[]){
	List l;
	l.pushEnd(5);
	l.pushEnd(6);
	l.pushEnd(7);
	l.pushFront(4);
	l.pushFront(42);
	l.pushEnd(90);
	l.printList();
	cout << l.size() << endl;
	cout << l.getFirst() << " " << l.getLast() << endl;
	cout << l.at(4) << " " << l.at(-4) << endl;
	cout << l.contains(90) << " " << l.contains(43) << endl;
	cout << endl << l.popFront() << endl;
	cout << endl << l.size() << endl;
	l.printList();

	cout << l.popEnd() << endl;
	cout << endl << l.size() << endl;
	l.printList();

  cout << l.popEnd() << endl;
  cout << endl << l.size() << endl;
  l.printList();

  l.deleteNth(1);
  cout << endl << l.size() << endl;
  l.printList();

  cout << endl << "test contains all";
  List p;
  p.pushEnd(5);
  p.pushEnd(6);

  List k;
  k.pushEnd(7);

  l.append(p);
  l.printList();

  List y(5000,7);
  List r(y);

  List w(l.mesh(p));
  l.printList();
  p.printList();
  w.printList();





	return 0;
}
