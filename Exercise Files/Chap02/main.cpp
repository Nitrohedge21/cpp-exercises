#include <iostream>
#include <format>

using namespace std;

void PrintTestString(const char* StringRef)
{
    for (int stringIndex = 0; StringRef[stringIndex]; stringIndex++)
    {
        // An alternative but hardcoded way of doing this for loop is by using the comment below
        // for (int stringIndex = 0; stringIndex < 5; stringIndex++)

        cout << "Element " << stringIndex << " is " << StringRef[stringIndex] << "\n";
        // This could be done somewhat shorter by using the comment below.
        // cout << format("element {} is {}\n", stringIndex, testString[stringIndex]);
    }
}

void PrintTestWhileLoops()
{
    // While loop practice
    int currentIndex = 0;
    while (currentIndex < 5)
    {
        cout << "value of 'currentIndex' is " << currentIndex << "\n";
        currentIndex++;
    }

    // For loop practice
    for (int index = 5; index < 10; index++)
    {
        cout << "value of 'index' is " << index << "\n";
    }
}

void PrintTestIfStatements()
{
    int i = 40;
    int x = 69;

    if (i < x) { cout << "i is lower than x\n"; }
    else if (i == x) { cout << "i is equal to x\n"; }
    else { cout << "i is greater than x\n"; }
}

void PrintTestCout()
{
    int x = 42;

    // Apparently in C++ 20, you can now do the line below instead of
    // using " string test = ("x is "); cout << test << x; 
    // Also, using "auto" prefix makes it detect the type of the variable automatically.
    auto str = format("x is {}\n", x);
    cout << str;

    // Printing practices
    int i = 0;
    cout << format("i is {}\n", i);
    i = 69;
    cout << format("i is now {}\n", i);
}

int main() 
{
    // This is where all the functions need to be called.
    // This is the main "game loop"
    PrintTestString("TESTINGGGG");
}