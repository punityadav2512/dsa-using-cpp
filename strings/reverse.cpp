#include <iostream>
using namespace std;


int getLength(char name[])
{
    int count = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse2(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
    cout << name << endl;
}

int main()
{
    char name[40];
    cout << "Enter your name: ";
    cin >> name;
    cout << "Reverse of your name is ";
    reverse2(name, getLength(name));

    return 0;
}