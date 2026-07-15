// Program to check if a String is Palindrome or Not
// Input: String
// Output: Palindrome or Not Palindrome

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, rev = "";
    cout << "Enter a string: ";
    cin >> str;
    
    // Reverse the string
    for(int i = str.length() - 1; i >= 0; i--) {
        rev = rev + str[i];
    }
    
    // Check palindrome
    if(str == rev)
        cout << str << " is a Palindrome" << endl;
    else
        cout << str << " is Not a Palindrome" << endl;
    
    return 0;
}
