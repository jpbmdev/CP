#include <iostream>
#include <vector> //push_back
#include <string>
#include <unordered_map> //count erase
#include <unordered_set> //count erase
#include <algorithm>     //sort reverse
#include <tuple>         //first second
#include <queue>         //push pop back size empty

using namespace std;

struct Employee
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    int age = 32;
    struct Employee e1 = {"John", age, 4200};

    // accessing the values in the variable
    printf("Name: %s\n", e1.name);
    printf("Age : %d\n", e1.age);
    printf("Salary : %f\n", e1.salary);
}