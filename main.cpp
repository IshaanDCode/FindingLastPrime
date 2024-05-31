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

            break;
        }
    }
}

int main() {
    int n;
    cin >> n;

    findLastPrimeNumber(n);
}
