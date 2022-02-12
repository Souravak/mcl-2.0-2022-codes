#include <bits/stdc++.h>

using namespace std;

struct nomi{
    int id;
    string name;
    int c=0;
}nom[100];

int main()
{
    int k,n;
    cin>>k>>n;
    int a[n];
    // struct nomi nom[k];
    for(int i=0;i<k;i++){
        cin>>nom[i].id;
        cin>>nom[i].name;
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
        for(int j=0;j<k;j++){
            if(nom[j].id==a[i]){
                nom[j].c++;
                break;
            }
        
        }
    }
    int big=0;
    for(int i=0;i<k;i++){
        if(nom[i].c>big) big=nom[i].c;
    }
    int bigcount=0;
    for(int i=0;i<k;i++){
        if(nom[i].c==big) bigcount++;
    }
    if(bigcount>1) cout<<"TIE"<<endl;
    else{
        for(int i=0;i<k;i++){
            if(nom[i].c==big) {
                cout<<nom[i].name;
                break;
            }
            
        }
    }
    return 0;
}