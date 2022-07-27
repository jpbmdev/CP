#include <iostream>

using namespace std;

struct TestStruct
{
    int id;
};

int main()
{
    int test = 0;
    int *testPtr = &test;
    cout << *testPtr << endl;

    TestStruct test2 = {12};
    TestStruct *test2Pointer = &test2;
    cout << test2Pointer->id;
}