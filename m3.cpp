#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter first integer: ";
    cin >> a;

    cout << "Enter second integer: ";
    cin >> b;

    cout << "Enter third integer: ";
    cin >> c;

    int* p1 = new int(a);
    int* p2 = new int(b);
    int* p3 = new int(c);

    cout << "\nVariable values:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    cout << "\nPointer addresses:" << endl;
    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;
    cout << "p3 = " << p3 << endl;

    cout << "\nPointer values:" << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;
    cout << "*p3 = " << *p3 << endl;

    delete p1;
    delete p2;
    delete p3;

    return 0;
}
