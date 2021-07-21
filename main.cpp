#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = a + 3;
    int c = 0;

    for (int i = 0; i < 5; i++) {
        c = c + i * b;
    }

    cout << "Hello World!" << endl;
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
}