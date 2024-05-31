#include <iostream>
#include <cmath>
using namespace std;


bool checkPrimeNumnber(int n)
{
    bool prime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }

    return prime;
}

void findLastPrimeNumber(int t)
{
    for (int i=t-1; i>=2; i--)
    {
        if (checkPrimeNumnber(i))
        {
            cout << i;
            cout << " Last Prime Number\n";

            break;
        }
    }
}

int main() {
    int n;
    cout << "Input a number to find the prime number before it\n";
    cin >> n;

    findLastPrimeNumber(n);
}
