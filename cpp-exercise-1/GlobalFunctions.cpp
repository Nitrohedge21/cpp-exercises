#include "GlobalFunctions.h"
#include <iostream>
#include <format>

using namespace std;

void GlobalFunctions::PrintTestString(const char* StringRef)
{
    for (int charIndex = 0; StringRef[charIndex]; charIndex++)
    {
        // An alternative but hardcoded way of doing this for loop is by using the comment below
        // for (int stringIndex = 0; stringIndex < 5; stringIndex++)

        cout << "Element " << charIndex << " is " << StringRef[charIndex] << "\n";
        // This could be done somewhat shorter by using the comment below.
        // cout << format("element {} is {}\n", stringIndex, testString[stringIndex]);
    }
}

void GlobalFunctions::PrintTestWhileLoops()
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

void GlobalFunctions::PrintTestIfStatements()
{
    int i = 40;
    int x = 69;

    if (i < x) { cout << "i is lower than x\n"; }
    else if (i == x) { cout << "i is equal to x\n"; }
    else { cout << "i is greater than x\n"; }
}

void GlobalFunctions::PrintTestCout()
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

struct GlobalFunctions::LibraryCatalogueCard
{
    const char* BookTitle{};
    const char* Author{};
    const char* Publisher{};
    const char* Subject{};

    int ISBN;
    int YearPublished;
    int YearAcquired;
    int StockQuantity;


    float DeweyDecimal;

};

void GlobalFunctions::PrintTestStruct()
{
    // Struct Test
    LibraryCatalogueCard a
    {
        "balls", "authorballs",
        "publisherballs","subjectballs",
        315269, 2001, 2015,195251,120.5f
    };

    cout << "Book title: " << a.BookTitle << "\n";
    cout << "Author: " << a.Author << "\n";
    cout << "Publisher: " << a.Publisher << "\n";
    cout << "Subject: " << a.Subject << "\n";
    cout << "ISBN Number: " << a.ISBN << "\n";
    cout << "Year Published: " << a.YearPublished << "\n";
    cout << "Year Acquired: " << a.YearAcquired << "\n";
    cout << "Stock Quantity: " << a.StockQuantity << "\n";
    cout << "DeweyDecimal:  " << a.DeweyDecimal << "\n";
}

class GlobalFunctions::TestClass
{
    // TODO - Figure out how to use classess as an alternative to structure.

public:
    string* BookTitle;

    const char* Author{};
    const char* Publisher{};
    const char* Subject{};

    int ISBN = 0;
    int YearPublished = 0;
    int YearAcquired = 0;
    int StockQuantity = 0;

    float DeweyDecimal = 0.5f;

};

void GlobalFunctions::PrimeNumberCalculation()
{
    bool isPrimeNumber = false;

    for (int currentIndex = 2; currentIndex < 100; ++currentIndex)
    {
        isPrimeNumber = true;

        for (int factor = 2; factor < currentIndex; ++factor)
        {
            if (currentIndex % factor == 0)
            {
                isPrimeNumber = false;
                break;
            }
        }

        if (isPrimeNumber)
        {
            cout << format("{} ", currentIndex);
        }
    }
}