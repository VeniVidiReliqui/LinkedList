/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ListTest_init = false;
#include "ListTest.h"

static ListTest suite_ListTest;

static CxxTest::List Tests_ListTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ListTest( "ListTest.h", 11, "ListTest", suite_ListTest, Tests_ListTest );

static class TestDescription_suite_ListTest_testME : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testME() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 15, "testME" ) {}
 void runTest() { suite_ListTest.testME(); }
} testDescription_suite_ListTest_testME;

static class TestDescription_suite_ListTest_testSizeManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testSizeManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 20, "testSizeManyElements" ) {}
 void runTest() { suite_ListTest.testSizeManyElements(); }
} testDescription_suite_ListTest_testSizeManyElements;

static class TestDescription_suite_ListTest_testSizeOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testSizeOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 30, "testSizeOneElement" ) {}
 void runTest() { suite_ListTest.testSizeOneElement(); }
} testDescription_suite_ListTest_testSizeOneElement;

static class TestDescription_suite_ListTest_testSizeNoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testSizeNoElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 35, "testSizeNoElements" ) {}
 void runTest() { suite_ListTest.testSizeNoElements(); }
} testDescription_suite_ListTest_testSizeNoElements;

static class TestDescription_suite_ListTest_testGetFirstManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testGetFirstManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 40, "testGetFirstManyElements" ) {}
 void runTest() { suite_ListTest.testGetFirstManyElements(); }
} testDescription_suite_ListTest_testGetFirstManyElements;

static class TestDescription_suite_ListTest_testGetFirstOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testGetFirstOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 50, "testGetFirstOneElement" ) {}
 void runTest() { suite_ListTest.testGetFirstOneElement(); }
} testDescription_suite_ListTest_testGetFirstOneElement;

static class TestDescription_suite_ListTest_testGetFirstNoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testGetFirstNoElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 55, "testGetFirstNoElements" ) {}
 void runTest() { suite_ListTest.testGetFirstNoElements(); }
} testDescription_suite_ListTest_testGetFirstNoElements;

static class TestDescription_suite_ListTest_testGetLastManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testGetLastManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 60, "testGetLastManyElements" ) {}
 void runTest() { suite_ListTest.testGetLastManyElements(); }
} testDescription_suite_ListTest_testGetLastManyElements;

static class TestDescription_suite_ListTest_testGetLastOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testGetLastOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 70, "testGetLastOneElement" ) {}
 void runTest() { suite_ListTest.testGetLastOneElement(); }
} testDescription_suite_ListTest_testGetLastOneElement;

static class TestDescription_suite_ListTest_testGetLastNoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testGetLastNoElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 75, "testGetLastNoElements" ) {}
 void runTest() { suite_ListTest.testGetLastNoElements(); }
} testDescription_suite_ListTest_testGetLastNoElements;

static class TestDescription_suite_ListTest_testAtManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testAtManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 80, "testAtManyElements" ) {}
 void runTest() { suite_ListTest.testAtManyElements(); }
} testDescription_suite_ListTest_testAtManyElements;

static class TestDescription_suite_ListTest_testAtOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testAtOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 94, "testAtOneElement" ) {}
 void runTest() { suite_ListTest.testAtOneElement(); }
} testDescription_suite_ListTest_testAtOneElement;

static class TestDescription_suite_ListTest_testAtNoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testAtNoElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 101, "testAtNoElements" ) {}
 void runTest() { suite_ListTest.testAtNoElements(); }
} testDescription_suite_ListTest_testAtNoElements;

static class TestDescription_suite_ListTest_testContainsManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testContainsManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 107, "testContainsManyElements" ) {}
 void runTest() { suite_ListTest.testContainsManyElements(); }
} testDescription_suite_ListTest_testContainsManyElements;

static class TestDescription_suite_ListTest_testContainsOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testContainsOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 121, "testContainsOneElement" ) {}
 void runTest() { suite_ListTest.testContainsOneElement(); }
} testDescription_suite_ListTest_testContainsOneElement;

static class TestDescription_suite_ListTest_testContainsNoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testContainsNoElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 127, "testContainsNoElements" ) {}
 void runTest() { suite_ListTest.testContainsNoElements(); }
} testDescription_suite_ListTest_testContainsNoElements;

static class TestDescription_suite_ListTest_testEqualsTrue : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testEqualsTrue() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 131, "testEqualsTrue" ) {}
 void runTest() { suite_ListTest.testEqualsTrue(); }
} testDescription_suite_ListTest_testEqualsTrue;

static class TestDescription_suite_ListTest_testEqualsFalse : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testEqualsFalse() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 150, "testEqualsFalse" ) {}
 void runTest() { suite_ListTest.testEqualsFalse(); }
} testDescription_suite_ListTest_testEqualsFalse;

static class TestDescription_suite_ListTest_testContainsAllManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testContainsAllManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 187, "testContainsAllManyElements" ) {}
 void runTest() { suite_ListTest.testContainsAllManyElements(); }
} testDescription_suite_ListTest_testContainsAllManyElements;

static class TestDescription_suite_ListTest_testContainsAllOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testContainsAllOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 216, "testContainsAllOneElement" ) {}
 void runTest() { suite_ListTest.testContainsAllOneElement(); }
} testDescription_suite_ListTest_testContainsAllOneElement;

static class TestDescription_suite_ListTest_testContainsAllNoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testContainsAllNoElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 225, "testContainsAllNoElements" ) {}
 void runTest() { suite_ListTest.testContainsAllNoElements(); }
} testDescription_suite_ListTest_testContainsAllNoElements;

static class TestDescription_suite_ListTest_testPushFrontManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testPushFrontManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 234, "testPushFrontManyElements" ) {}
 void runTest() { suite_ListTest.testPushFrontManyElements(); }
} testDescription_suite_ListTest_testPushFrontManyElements;

static class TestDescription_suite_ListTest_testPushFrontOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testPushFrontOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 242, "testPushFrontOneElement" ) {}
 void runTest() { suite_ListTest.testPushFrontOneElement(); }
} testDescription_suite_ListTest_testPushFrontOneElement;

static class TestDescription_suite_ListTest_testPushEnd : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testPushEnd() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 249, "testPushEnd" ) {}
 void runTest() { suite_ListTest.testPushEnd(); }
} testDescription_suite_ListTest_testPushEnd;

static class TestDescription_suite_ListTest_testPushEndOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testPushEndOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 260, "testPushEndOneElement" ) {}
 void runTest() { suite_ListTest.testPushEndOneElement(); }
} testDescription_suite_ListTest_testPushEndOneElement;

static class TestDescription_suite_ListTest_testPopEndManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testPopEndManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 267, "testPopEndManyElements" ) {}
 void runTest() { suite_ListTest.testPopEndManyElements(); }
} testDescription_suite_ListTest_testPopEndManyElements;

static class TestDescription_suite_ListTest_testPopEndOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testPopEndOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 279, "testPopEndOneElement" ) {}
 void runTest() { suite_ListTest.testPopEndOneElement(); }
} testDescription_suite_ListTest_testPopEndOneElement;

static class TestDescription_suite_ListTest_testPopEndNoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testPopEndNoElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 285, "testPopEndNoElements" ) {}
 void runTest() { suite_ListTest.testPopEndNoElements(); }
} testDescription_suite_ListTest_testPopEndNoElements;

static class TestDescription_suite_ListTest_testPopFrontManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testPopFrontManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 291, "testPopFrontManyElements" ) {}
 void runTest() { suite_ListTest.testPopFrontManyElements(); }
} testDescription_suite_ListTest_testPopFrontManyElements;

static class TestDescription_suite_ListTest_testPopFrontOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testPopFrontOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 303, "testPopFrontOneElement" ) {}
 void runTest() { suite_ListTest.testPopFrontOneElement(); }
} testDescription_suite_ListTest_testPopFrontOneElement;

static class TestDescription_suite_ListTest_testPopFrontNoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testPopFrontNoElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 309, "testPopFrontNoElements" ) {}
 void runTest() { suite_ListTest.testPopFrontNoElements(); }
} testDescription_suite_ListTest_testPopFrontNoElements;

static class TestDescription_suite_ListTest_testSetNthManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testSetNthManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 315, "testSetNthManyElements" ) {}
 void runTest() { suite_ListTest.testSetNthManyElements(); }
} testDescription_suite_ListTest_testSetNthManyElements;

static class TestDescription_suite_ListTest_testSetNthOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testSetNthOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 334, "testSetNthOneElement" ) {}
 void runTest() { suite_ListTest.testSetNthOneElement(); }
} testDescription_suite_ListTest_testSetNthOneElement;

static class TestDescription_suite_ListTest_testSetNthNoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testSetNthNoElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 344, "testSetNthNoElements" ) {}
 void runTest() { suite_ListTest.testSetNthNoElements(); }
} testDescription_suite_ListTest_testSetNthNoElements;

static class TestDescription_suite_ListTest_testInsertNthManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testInsertNthManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 350, "testInsertNthManyElements" ) {}
 void runTest() { suite_ListTest.testInsertNthManyElements(); }
} testDescription_suite_ListTest_testInsertNthManyElements;

static class TestDescription_suite_ListTest_testInsertNthOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testInsertNthOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 371, "testInsertNthOneElement" ) {}
 void runTest() { suite_ListTest.testInsertNthOneElement(); }
} testDescription_suite_ListTest_testInsertNthOneElement;

static class TestDescription_suite_ListTest_testInsertNthNoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testInsertNthNoElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 380, "testInsertNthNoElements" ) {}
 void runTest() { suite_ListTest.testInsertNthNoElements(); }
} testDescription_suite_ListTest_testInsertNthNoElements;

static class TestDescription_suite_ListTest_testDeleteNthManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testDeleteNthManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 386, "testDeleteNthManyElements" ) {}
 void runTest() { suite_ListTest.testDeleteNthManyElements(); }
} testDescription_suite_ListTest_testDeleteNthManyElements;

static class TestDescription_suite_ListTest_testDeleteNthOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testDeleteNthOneElement() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 411, "testDeleteNthOneElement" ) {}
 void runTest() { suite_ListTest.testDeleteNthOneElement(); }
} testDescription_suite_ListTest_testDeleteNthOneElement;

static class TestDescription_suite_ListTest_testDeleteNthNoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testDeleteNthNoElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 422, "testDeleteNthNoElements" ) {}
 void runTest() { suite_ListTest.testDeleteNthNoElements(); }
} testDescription_suite_ListTest_testDeleteNthNoElements;

static class TestDescription_suite_ListTest_testAppendManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testAppendManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 427, "testAppendManyElements" ) {}
 void runTest() { suite_ListTest.testAppendManyElements(); }
} testDescription_suite_ListTest_testAppendManyElements;

static class TestDescription_suite_ListTest_testAppendNoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testAppendNoElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 462, "testAppendNoElements" ) {}
 void runTest() { suite_ListTest.testAppendNoElements(); }
} testDescription_suite_ListTest_testAppendNoElements;

static class TestDescription_suite_ListTest_testCopyConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testCopyConstructor() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 481, "testCopyConstructor" ) {}
 void runTest() { suite_ListTest.testCopyConstructor(); }
} testDescription_suite_ListTest_testCopyConstructor;

static class TestDescription_suite_ListTest_testOtherConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testOtherConstructor() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 496, "testOtherConstructor" ) {}
 void runTest() { suite_ListTest.testOtherConstructor(); }
} testDescription_suite_ListTest_testOtherConstructor;

static class TestDescription_suite_ListTest_testMeshManyElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testMeshManyElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 503, "testMeshManyElements" ) {}
 void runTest() { suite_ListTest.testMeshManyElements(); }
} testDescription_suite_ListTest_testMeshManyElements;

static class TestDescription_suite_ListTest_testMeshNoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ListTest_testMeshNoElements() : CxxTest::RealTestDescription( Tests_ListTest, suiteDescription_ListTest, 534, "testMeshNoElements" ) {}
 void runTest() { suite_ListTest.testMeshNoElements(); }
} testDescription_suite_ListTest_testMeshNoElements;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
