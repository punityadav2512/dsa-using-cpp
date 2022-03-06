#include <iostream>
using namespace std;

int getLength(char name[])
{
    int count = 0;

    // 1st approach

    // while (*name != '\0')
    // {
    //     count++;
    //     name++;
    // }

    // 2nd approach
    // int i = 0;
    // while (name[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }

    // 3rd approach (for loop)

    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[30];
    cout << "Enter your name: ";
    cin >> name;
    cout << "Your name is " << name << endl;
    cout << "The length of your name is : " << getLength(name) << endl;
    return 0;
}