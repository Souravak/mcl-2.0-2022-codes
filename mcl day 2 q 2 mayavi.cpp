#include <bits/stdc++.h>
using namespace std;
int main() {  
    int t;
    cin>>t;
    while(t--){
        int n,spc;
        int big=0;
        cin>>n;
        n++;
        while(n--){
            int count=0;
            string word;
            getline(cin, word);
            int len=word.length();
            for (int i = 0; i<len; i++){
                if (word[i] == ' ')
                    count++;    
            }
            count++;
            if(count>big) big=count;
        }
        for(int j=0;j<big;j++){
            cout<<"om cream kuttichatha"<<endl;
        }
    }

}