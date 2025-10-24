// FileName: Reverse_String_c++.cpp
#include <iostream>
#include <string>
#include <stack> // Library codes

using namespace std;

int main()
{
    char str[10] = "ABCDE";
    stack<char> s; // stack class, like vector
    int i;
    for (i = 0; i < strlen(str); i++)
        s.push(str[i]);
    cout << "Reversed String: ";
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}

// No codes for creating stack
//  No initialization
//  Clean interface for stack functions
//  Available in library well-tested