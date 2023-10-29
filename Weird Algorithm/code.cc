#include <bits/stdc++.h>
using namespace std;
void  solve()
{
    long long int n =0;
    cin>>n;
    cout<<n <<" "<<endl;
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
            cout<<n<<" ";
        }
        else{
            n=(n*3)+1;
            cout << n << " ";
        }
    }
}
int main()
{
     solve();
    return 0;
}