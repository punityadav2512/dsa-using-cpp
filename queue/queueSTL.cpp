#include <iostream>
#include <queue>
using namespace std;

int main()
{

    // create a queue
    queue<int> q;

    // push
    q.push(17);
    q.push(18);
    cout << q.front() << endl;
    cout << "size of queue " << q.size() << endl;

    // pop
    q.pop();
    q.pop();
    cout << q.empty() << endl;
    cout << q.front() << endl;

    return 0;
}