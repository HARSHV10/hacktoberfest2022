#include<bits/stdc++.h>

using namespace std;

// to print the decimal number matlab ki jaise 14 15 16 etc 

int main(){
    int n;
    cin >>n;
    string s;
    int i=0;
    int p=1;
    while(n>0){
        s.push_back('0'+n%2);
        n=n/2;
        
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    // is approach ki kuch limitation hai 
    // jab reverse karte hai to ye int mai store nahi akr pata to usj=ke liye we can use 
    // kyuki to usko hum int aur ll mai use nah ikar pate 
    // to uske liye we can use string pushback 

    

}