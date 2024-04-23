#include <iostream>
#include <cstdlib> // for qsort
#include <cstring> // for strcmp

using namespace std;

// Comparison function for sorting strings
//Using Geeksforgeeks ASCII Table
//UPPERCASE LETTERS FIRST
/*

https://www.geeksforgeeks.org/ascii-table/
https://cplusplus.com/reference/cstdlib/qsort/

*/


int comp_string(const void* a, const void* b) {
    // Cast 'a' and 'b' to pointers to const strings
    const string* str1 = static_cast<const string*>(a);
    const string* str2 = static_cast<const string*>(b);
    // Compare the strings
    return str1->compare(*str2);
}

// Comparison function for sorting integers
int comp_int(const void* a, const void* b) {
    // Dereference 'a' and 'b' to get the integers
    //We don't want pointers to the integers we want the actual value so we dereference them
    int num1 = *static_cast<const int*>(a);
    int num2 = *static_cast<const int*>(b);
    // Compare the integers
    return num1 - num2;
}

int main() {

    //Values given by the directions with size of 10
    string str_array[10] = { "untied", "victory", "war", "X-ray", "Yield", "apple", "bakery", "child", "devil", "emerge" };
    int int_array[10] = { 3, 5, 7, 1, 2, 4, 10, 6, 8, 9 };
    int numValues = 10;

    // Sorting string array
    qsort(str_array, numValues, sizeof(string), comp_string);
    cout << "Sorted string array:" << endl;
    //Loop to print the sorted array of strings
    for (int i = 0; i < numValues; ++i) {
        cout << str_array[i] << endl;
    }

    // Sorting integer array
    qsort(int_array, numValues, sizeof(int), comp_int);
    cout << "\nSorted integer array:" << endl;
    //Loop to print the sorted array of integers
    for (int i = 0; i < numValues; ++i) {
        cout << int_array[i] << endl;
    }

    return 0;
}
