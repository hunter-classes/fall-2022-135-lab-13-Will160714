#include "funcs.h"

int main(){
    std::cout << "Task A\n";
    std::cout << "printRange(1, 3): " << printRange(1,3) << std::endl;
    std::cout << std::endl;

    std::cout << "Task B\n";
    std::cout << "sumRange(1, 5) = " << std::to_string(sumRange(1, 5)) << std::endl;
    std::cout << std::endl;

    std::cout << "Task C\n";
    int size = 2;
    int* arr = new int[size];
    arr[0] = 3;
    arr[1] = 7;
    std::cout << "sumArray(arr, size) = " << std::to_string(sumArray(arr, size)) << std::endl;
    std::cout << std::endl;

    std::cout << "Task D\n";
    std::cout << "isAlphanumeric('aSAbd123'): " << isAlphanumeric("aSAbd123") << std::endl; 
    std::cout << std::endl;

    std::cout << "Task E\n";
    std::cout << "nestedParens('(())'): " << nestedParens("(())") << std::endl;    
    std::cout << std::endl;

    std::cout << "Task F\n";
    int* arr1 = new int[2];
    arr1[0] = 4;
    arr1[1] = 5;
    std::cout << "divisible(arr1, 2): " << divisible(arr1, 2) << std::endl;
    std::cout << std::endl;

    return 0;
}