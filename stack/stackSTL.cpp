#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    // push
    s.push(2);
    s.push(3);

    // pop
    s.pop();

    cout << "Printing top element : " << s.top() << endl;

    // isEmpty
    if (s.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }
    // size of stack
    cout << "Size of stack is : " << s.size() << endl;
    return 0;
}