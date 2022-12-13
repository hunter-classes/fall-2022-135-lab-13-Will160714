#include "funcs.h"
#include <iostream>

std::string printRange(int left, int right){
    if(left == right)
        return std::to_string(left);
    return std::to_string(left) + " " + printRange(left + 1, right);
}

int sumRange(int left, int right){
    if(left == right)
        return left;
    return left + sumRange(left + 1, right);
}

int sumArray(int *arr, int size){
    if(size == 0)
        return 0;
    int value = *arr;
    arr++;
    return value + sumArray(arr, size - 1);
}

bool isAlphanumeric(std::string s){
    if(s == "")
        return true;
    if(isalpha(s[0]) || isdigit(s[0]))
        return isAlphanumeric(s.substr(1));
    else
        return false;
}

bool nestedParens(std::string s){
    if(s.length() == 0)
        return true;
    if(s[0] == '(' && s[s.length() - 1] == ')')
        return nestedParens(s.substr(1, s.length() - 2));
    else
        return false;
}

bool Solvable(int *prices, int size, int alice, int bob){
    bool x;
    bool y;
    if(size == 0){
        if(alice == bob)
            return true;
        else
            return false;
    }
    else{
        x = Solvable(prices, size - 1, alice + prices[size - 1], bob);
        y = Solvable(prices, size - 1, alice, bob + prices[size - 1]);
    }
    return x || y;
}

bool divisible(int *prices, int size){
    return Solvable(prices, size, 0, 0);
}