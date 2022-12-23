#include <iostream>
using namespace std;

bool is_prime(int n);

int main() 
{
    int n, count = 1;
    cout << "Enter number: ";
    cin >> n;

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(!is_prime(n) && is_prime(count))
    {
        cout << "Number " << n << " is funny";
    }
}

bool is_prime(int n)
{
    bool is_prime = true;

    // 0 and 1 are not prime numbers
    if (n < 1) 
    {
       return false;
    }

    // loop to check if n is prime
    for (int i = 2; i <= n / 2; ++i) 
    {
        if (n % i == 0) 
        {
            return false;
            break;
        }
    }
}