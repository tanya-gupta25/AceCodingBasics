
// #Approach1

#include <iostream>
#include<math.h>
using namespace std;

int isprime(int i)
{
    if (i <= 1)
        return 0;
    for (int j = 2; j < i; j++)
    {
        if (i % j == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num, last;
    cout << "Enter first number" << endl;
    cin >> num;
    cout << "Enter last number" << endl;
    cin >> last;
    // for (int i = num; i <= 100; i++)
    for (int i = num; i <= last; i++)
    {
        if (isprime(i) == 1)
            cout << i << endl;
    }
    return 0;
}

// #Approach2

int main()
{
    for(int i=1;i<=100;i++)
    {
        int count=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==0 & i!=1) cout<<i<<endl;
    }
}
// Complexity will be O(n)


// #Approach3

int main()
{
    for(int i=1;i<=100;i++)
    {
        int count=0;
        for(int j=2;j<=sqrt(i);j++) //any number will be divisible by its square root too
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==0 && i!=1) cout<<i<<endl;
    }
}
// Complexity will be √n