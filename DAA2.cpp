#include <iostream>
using namespace std;
 
int countTrailingZeroes(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int j = i;
        while (j % 5 == 0) {
            count++;
            j /= 5;
        }
    }
    return count;
}
 
int main()
{
    int n,x ;
    do
    {
    cout<<"\nEnter the value of n";
    cin>>n;
    cout << countTrailingZeroes(n) << endl;
    cout<<"\nTo continue type 1";
    cin>>x;
} while(x==1);
    return 0;
}
