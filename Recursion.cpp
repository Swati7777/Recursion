#include <iostream>

using namespace std;

int factorial(int);
void display(int);

int main()
{
    int n;
    cout << " Enter the number " << endl;
    cin >> n;
    display(n);
}

int factorial(int a)
{
    if (a == 0 || a == 1)
        return 1;
    else
        return a * factorial(a - 1);
}

void display(int d)
{
    cout << " Factorial of " << d << "=" << factorial(d);
}
