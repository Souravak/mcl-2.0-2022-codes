#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        int j=0,i=0;
        sort(a,a+n);
        while(j<n && i<n){
            if(a[i]!=-1 && a[j]>a[i]){
                count++;
                i++;
            }
            j++;
        }
        cout<<count<<endl;
    }

    return 0;
}
