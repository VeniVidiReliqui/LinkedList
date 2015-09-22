#ifndef SORT_TEST_H
#define SORT_TEST_H

#include "List.h"

#include <iostream>
#include <cxxtest/TestSuite.h>

using namespace std;

class ListTest : public CxxTest::TestSuite {
public:
	
	// Constructors
  void testME() {
    List l;
		TS_ASSERT(l.size() == 0);
  }

  void testSizeManyElements(){
    List l;
    l.pushEnd(5);
    l.pushEnd(6);
    l.pushEnd(7);
    l.pushEnd(9);
    l.pushEnd(10);
    l.pushEnd(4);
    TS_ASSERT_EQUALS(6,l.size());
  }
  void testSizeOneElement(){
    List l;
    l.pushEnd(5);
    TS_ASSERT_EQUALS(1,l.size());
  }
  void testSizeNoElements(){
    List l;
    TS_ASSERT_EQUALS(0,l.size());
  }

  void testGetFirstManyElements(){
    List l;
    l.pushEnd(5);
    l.pushEnd(6);
    l.pushEnd(7);
    l.pushEnd(9);
    l.pushEnd(10);
    l.pushEnd(4);
    TS_ASSERT_EQUALS(5,l.getFirst());
  }
  void testGetFirstOneElement(){
    List p;
    p.pushEnd(9);
    TS_ASSERT_EQUALS(9,p.getFirst());
  }
  void testGetFirstNoElements(){
    List k;
    TS_ASSERT_EQUALS(0,k.getFirst());
  }

  void testGetLastManyElements(){
    List l;
    l.pushEnd(5);
    l.pushEnd(6);
    l.pushEnd(7);
    l.pushEnd(9);
    l.pushEnd(10);
    l.pushEnd(4);
    TS_ASSERT_EQUALS(4,l.getLast());
  }
  void testGetLastOneElement(){
    List l;
    l.pushEnd(5);
    TS_ASSERT_EQUALS(5,l.getLast());
  }
  void testGetLastNoElements(){
    List l;
    TS_ASSERT_EQUALS(0,l.getLast());
  }

  void testAtManyElements(){
    List l;
    l.pushEnd(5);
    l.pushEnd(6);
    l.pushEnd(7);
    l.pushEnd(9);
    l.pushEnd(10);
    l.pushEnd(4);
    TS_ASSERT_EQUALS(5,l.at(0));
    TS_ASSERT_EQUALS(5,l.at(-6));
    TS_ASSERT_EQUALS(4,l.at(5));
    TS_ASSERT_EQUALS(4,l.at(-1));
    TS_ASSERT_EQUALS(0,l.at(9));
  }
  void testAtOneElement(){
    List l;
    l.pushEnd(5);
    TS_ASSERT_EQUALS(5,l.at(0));
    TS_ASSERT_EQUALS(5,l.at(-1));
    TS_ASSERT_EQUALS(0,l.at(9));
  }
  void testAtNoElements(){
    List l;
    TS_ASSERT_EQUALS(0,l.at(0));
    TS_ASSERT_EQUALS(0,l.at(1));
  }

  void testContainsManyElements(){
    List l;
    l.pushEnd(5);
    l.pushEnd(6);
    l.pushEnd(7);
    l.pushEnd(9);
    l.pushEnd(10);
    l.pushEnd(4);
    TS_ASSERT(l.contains(5));
    TS_ASSERT(l.contains(7));
    TS_ASSERT(l.contains(4));
    TS_ASSERT(! l.contains(11));

  }
  void testContainsOneElement(){
    List l;
    l.pushEnd(5);
    TS_ASSERT(l.contains(5));
    TS_ASSERT(! l.contains(6));
  }
  void testContainsNoElements(){
    List l;
    TS_ASSERT(! l.contains(8));
  }
  void testEqualsTrue(){
    List l;
    l.pushEnd(5);
    l.pushEnd(6);
    l.pushEnd(7);
    l.pushEnd(9);
    l.pushEnd(10);
    l.pushEnd(4);

    List p;
    p.pushEnd(5);
    p.pushEnd(6);
    p.pushEnd(7);
    p.pushEnd(9);
    p.pushEnd(10);
    p.pushEnd(4);

    TS_ASSERT(l.equals(p));
  }
  void testEqualsFalse(){
    List l;
    l.pushEnd(5);
    l.pushEnd(6);
    l.pushEnd(7);
    l.pushEnd(9);
    l.pushEnd(10);
    l.pushEnd(4);

    List p;
    p.pushEnd(5);
    p.pushEnd(6);
    p.pushEnd(9);
    p.pushEnd(9);
    p.pushEnd(10);
    p.pushEnd(4);

    TS_ASSERT(! l.equals(p));

    List k;
    k.pushEnd(5);
    k.pushEnd(6);
    k.pushEnd(7);
    k.pushEnd(9);
    k.pushEnd(10);
    k.pushEnd(4);

    List n;
    n.pushEnd(5);
    n.pushEnd(6);
    n.pushEnd(7);
    n.pushEnd(9);
    n.pushEnd(10);

    TS_ASSERT(! k.equals(n));
  }

  void testContainsAllManyElements(){
    List l;
    l.pushEnd(5);
    l.pushEnd(6);
    l.pushEnd(7);
    l.pushEnd(9);
    l.pushEnd(10);
    l.pushEnd(4);

    List p;
    p.pushEnd(5);
    p.pushEnd(6);
    p.pushEnd(7);
    p.pushEnd(9);
    p.pushEnd(10);
    p.pushEnd(4);

    TS_ASSERT(l.containsAll(p))

    List k(l);
    List r;
    r.pushEnd(5);
    r.pushEnd(9);
    r.pushEnd(4);
    TS_ASSERT(k.containsAll(r));

    r.pushEnd(11);
    TS_ASSERT(! k.containsAll(r));
  }
  void testContainsAllOneElement(){
    List l;
    l.pushEnd(8);
    List k(l);
    List p(l);
    p.pushEnd(9);
    TS_ASSERT(l.containsAll(k));
    TS_ASSERT(! l.containsAll(p));
  }
  void testContainsAllNoElements(){
    List l;
    List k;
    List p;
    p.pushEnd(9);
    TS_ASSERT(l.containsAll(k));
    TS_ASSERT(! l.containsAll(p));
  }

  void testPushFrontManyElements(){
    List l;
    l.pushFront(8);
    l.pushFront(9);
    l.pushFront(10);
    TS_ASSERT_EQUALS(3,l.size());
    TS_ASSERT_EQUALS(10,l.getFirst());
  }
  void testPushFrontOneElement(){
    List l;
    l.pushFront(8);
    TS_ASSERT_EQUALS(1,l.size());
    TS_ASSERT_EQUALS(8,l.getFirst());
  }

  void testPushEnd(){
    List l;
    l.pushEnd(5);
    l.pushEnd(6);
    l.pushEnd(7);
    l.pushEnd(9);
    l.pushEnd(10);
    l.pushEnd(4);
    TS_ASSERT_EQUALS(6,l.size());
    TS_ASSERT_EQUALS(4,l.getLast());
  }
  void testPushEndOneElement(){
    List l;
    l.pushEnd(9);
    TS_ASSERT_EQUALS(1,l.size());
    TS_ASSERT_EQUALS(9,l.getLast());
  }
	
  void testPopEndManyElements(){
    List l;
    l.pushEnd(5);
    l.pushEnd(6);
    l.pushEnd(7);
    l.pushEnd(9);
    l.pushEnd(10);
    l.pushEnd(4);
    TS_ASSERT_EQUALS(4,l.popEnd());
    TS_ASSERT_EQUALS(5,l.size());
    TS_ASSERT_EQUALS(10,l.getLast());
  }
	void testPopEndOneElement(){
	  List l;
	  l.pushEnd(5);
	  TS_ASSERT_EQUALS(5,l.popEnd());
	  TS_ASSERT_EQUALS(0,l.size());
	}
	void testPopEndNoElements(){
	  List l;
	  TS_ASSERT_EQUALS(0,l.popEnd());
	  TS_ASSERT_EQUALS(0,l.size());
	}

	void testPopFrontManyElements(){
    List l;
    l.pushEnd(5);
    l.pushEnd(6);
    l.pushEnd(7);
    l.pushEnd(9);
    l.pushEnd(10);
    l.pushEnd(4);
    TS_ASSERT_EQUALS(5,l.popFront());
    TS_ASSERT_EQUALS(5,l.size());
    TS_ASSERT_EQUALS(6,l.getFirst());
	}
	void testPopFrontOneElement(){
    List l;
    l.pushEnd(5);
    TS_ASSERT_EQUALS(5,l.popFront());
    TS_ASSERT_EQUALS(0,l.size());
	}
	void testPopFrontNoElements(){
    List l;
    TS_ASSERT_EQUALS(0,l.popFront());
    TS_ASSERT_EQUALS(0,l.size());
	}

	void testSetNthManyElements(){
    List l;
    l.pushEnd(5);
    l.pushEnd(6);
    l.pushEnd(7);
    l.pushEnd(9);
    l.pushEnd(10);
    l.pushEnd(4);
    TS_ASSERT(l.setNth(4,11));
    TS_ASSERT_EQUALS(11,l.at(4));
    TS_ASSERT(l.setNth(-2,12));
    TS_ASSERT_EQUALS(12,l.at(4));
    TS_ASSERT(l.setNth(-1,20));
    TS_ASSERT_EQUALS(20,l.at(5));
    TS_ASSERT(l.setNth(-6,30));
    TS_ASSERT_EQUALS(30,l.at(0));
    TS_ASSERT_EQUALS(6,l.size());
    TS_ASSERT(! l.setNth(10,11));
	}
	void testSetNthOneElement(){
	  List l;
	  l.pushEnd(9);
	  TS_ASSERT(l.setNth(0,10));
	  TS_ASSERT_EQUALS(10,l.at(0));
	  TS_ASSERT(l.setNth(-1,23));
	  TS_ASSERT_EQUALS(23,l.at(0));
	  TS_ASSERT_EQUALS(1,l.size());
	  TS_ASSERT(! l.setNth(3,30));
	}
	void testSetNthNoElements(){
	  List l;
	  TS_ASSERT(! l.setNth(0,4));
	  TS_ASSERT_EQUALS(0,l.size());
	}

  void testInsertNthManyElements(){
    List l;
    l.pushEnd(5);
    l.pushEnd(6);
    l.pushEnd(7);
    l.pushEnd(9);
    l.pushEnd(10);
    l.pushEnd(4);
    TS_ASSERT(l.insertNth(4,11));
    TS_ASSERT_EQUALS(11,l.at(4));
    TS_ASSERT_EQUALS(9,l.at(3));
    TS_ASSERT_EQUALS(10,l.at(5));
    TS_ASSERT_EQUALS(7,l.size());

    TS_ASSERT(l.insertNth(-3,40));
    TS_ASSERT_EQUALS(40,l.at(4));
    TS_ASSERT_EQUALS(9,l.at(3));
    TS_ASSERT_EQUALS(11,l.at(5));
    TS_ASSERT_EQUALS(8,l.size());
    TS_ASSERT(! l.insertNth(10,11));
  }
  void testInsertNthOneElement(){
    List l;
    l.pushEnd(9);
    TS_ASSERT(l.insertNth(0,10));
    TS_ASSERT_EQUALS(10,l.at(0));
    TS_ASSERT_EQUALS(9,l.at(1));
    TS_ASSERT_EQUALS(2,l.size());
    TS_ASSERT(! l.setNth(3,30));
  }
  void testInsertNthNoElements(){
    List l;
    TS_ASSERT(! l.setNth(0,4));
    TS_ASSERT_EQUALS(0,l.size());
  }

  void testDeleteNthManyElements(){
    List l;
    l.pushEnd(5);
    l.pushEnd(6);
    l.pushEnd(7);
    l.pushEnd(9);
    l.pushEnd(10);
    l.pushEnd(4);
    TS_ASSERT_EQUALS(5,l.deleteNth(0));
    TS_ASSERT_EQUALS(5,l.size());
    TS_ASSERT_EQUALS(7,l.deleteNth(1));
    TS_ASSERT_EQUALS(4,l.size());
    TS_ASSERT_EQUALS(4,l.deleteNth(3));
    TS_ASSERT_EQUALS(3,l.size());

    List p;
    p.pushEnd(5);
    p.pushEnd(6);
    p.pushEnd(7);
    p.pushEnd(9);
    p.pushEnd(10);
    p.pushEnd(4);
    TS_ASSERT_EQUALS(9,p.deleteNth(-3));
    TS_ASSERT_EQUALS(5,p.size());
  }
  void testDeleteNthOneElement(){
    List l;
    l.pushEnd(9);
    TS_ASSERT_EQUALS(9,l.deleteNth(0));
    TS_ASSERT_EQUALS(0,l.size());

    List k;
    k.pushEnd(5);
    TS_ASSERT_EQUALS(5,k.deleteNth(-1));
    TS_ASSERT_EQUALS(0,k.size());
  }
  void testDeleteNthNoElements(){
    List l;
    TS_ASSERT_EQUALS(0,l.deleteNth(7));
  }

  void testAppendManyElements(){
    List l;
    l.pushEnd(5);
    l.pushEnd(6);
    l.pushEnd(7);
    l.pushEnd(9);
    l.pushEnd(10);
    l.pushEnd(4);

    List p;
    p.pushEnd(5);
    p.pushEnd(6);
    p.pushEnd(7);
    p.pushEnd(9);
    p.pushEnd(10);
    p.pushEnd(4);

    l.append(p);
    TS_ASSERT_EQUALS(12,l.size());

    List k;
    k.pushEnd(5);
    k.pushEnd(6);
    k.pushEnd(7);
    k.pushEnd(9);
    k.pushEnd(10);
    k.pushEnd(4);
    k.pushEnd(5);
    k.pushEnd(6);
    k.pushEnd(7);
    k.pushEnd(9);
    k.pushEnd(10);
    k.pushEnd(4);
    TS_ASSERT(l.equals(k));
  }
  void testAppendNoElements(){
    List k;
    k.pushEnd(5);
    k.pushEnd(6);
    k.pushEnd(7);
    k.pushEnd(9);
    k.pushEnd(10);
    k.pushEnd(4);

    List l;

    k.append(l);
    TS_ASSERT_EQUALS(6,k.size());
    TS_ASSERT(! k.equals(l))
    l.append(k);
    TS_ASSERT_EQUALS(6,l.size());
    TS_ASSERT(k.equals(l));
  }

  void testCopyConstructor(){
    List k;
    k.pushEnd(5);
    k.pushEnd(6);
    k.pushEnd(7);
    k.pushEnd(9);
    k.pushEnd(10);
    k.pushEnd(4);

    List l(k);

    TS_ASSERT(l.equals(k));
    TS_ASSERT_EQUALS(l.size(),k.size());
  }

  void testOtherConstructor(){
    List l(9,10);
    TS_ASSERT_EQUALS(9,l.size());
    TS_ASSERT_EQUALS(10,l.at(3));
    TS_ASSERT_EQUALS(10,l.at(5));
  }

  void testMeshManyElements(){
    List k;
    k.pushEnd(94);
    k.pushEnd(12);
    k.pushEnd(13);
    List p;
    p.pushEnd(5);
    p.pushEnd(6);
    p.pushEnd(7);
    List f(k.mesh(p));
    List y;
    y.pushEnd(94);
    y.pushEnd(5);
    y.pushEnd(12);
    y.pushEnd(6);
    y.pushEnd(13);
    y.pushEnd(7);
    TS_ASSERT(f.equals(y));

    List b;
    b.pushEnd(94);
    b.pushEnd(5);
    b.pushEnd(12);
    b.pushEnd(6);
    b.pushEnd(13);
    List w;
    w.pushEnd(5);
    w.pushEnd(6);
    List r(k.mesh(w));
    TS_ASSERT(r.equals(b));
  }
  void testMeshNoElements(){
    List k;
    k.pushEnd(94);
    k.pushEnd(12);
    k.pushEnd(13);
    List p;
    List r(k.mesh(p));
    TS_ASSERT(r.equals(k));

    List t(p.mesh(k));
    TS_ASSERT(t.equals(k));
  }

};

#endif
