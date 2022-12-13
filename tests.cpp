#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include <iostream>

TEST_CASE("Task A"){
    CHECK(printRange(1, 3) == "1 2 3");
    CHECK(printRange(-1, 1) == "-1 0 1");
    CHECK(printRange(1, 1) == "1");
}

TEST_CASE("Task B"){
    CHECK(sumRange(1, 5) == 15);
    CHECK(sumRange(-1, 1) == 0);
    CHECK(sumRange(1, 1) == 1);
}

TEST_CASE("Task C"){
    int size = 10;
    int* arr = new int[size]{0,0,0,0,0,0,0,0,0,0};
    CHECK(sumArray(arr, size) == 0);
    arr[0] = 17;
    arr[1] = 12;
    CHECK(sumArray(arr, size) == 29);
    arr[2] = -5;
    CHECK(sumArray(arr, size) == 24);
    delete[] arr;
}


TEST_CASE("Task D"){
    CHECK(isAlphanumeric("ABCDEFG") == true);
    CHECK(isAlphanumeric(" ") == false); 
    CHECK(isAlphanumeric("abcsd") == true);
    CHECK(isAlphanumeric("aSAbd123") == true); 
    CHECK(isAlphanumeric("12342") == true);
    CHECK(isAlphanumeric("!") == false);  
}

TEST_CASE("Task E"){
    CHECK(nestedParens("") == true);
    CHECK(nestedParens("()") == true);
    CHECK(nestedParens("(())") == true);
    CHECK(nestedParens("(") == false);
    CHECK(nestedParens("abcsde32232") == false);
    CHECK(nestedParens("(()") == false);
}

TEST_CASE("Task F"){
    int size = 10;
    int* arr = new int[size]{10, 15, 12, 18, 19, 17, 13, 35, 33};
    CHECK(divisible(arr, size));
    size = 3;
    int* test = new int[size]{1,2,3};
    CHECK(divisible(test, size));
    int* test1 = new int[size]{3,3,1};
    CHECK(!divisible(test1, size));
}
