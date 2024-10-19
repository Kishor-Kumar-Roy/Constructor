#include <iostream>
using namespace std;

class Factorial
{
    private:
        int* fact;

    public:
        Factorial(int* num) 
        {
            cout << "Parameterized constructor called" << endl;
            
            fact = new int;
            fact = num;
        }

        void display() 
        {
            cout << "Factorial is " << *fact << endl;
        }
};

int main() 
{
    int n,fact=1,i;
   cout << "Enter a number: ";
    cin >> n;
    for(i=1;i<=n;i++)
    {
    fact=fact*i;
    }

    Factorial f1(&fact);
    f1.display();
    return 0;
}