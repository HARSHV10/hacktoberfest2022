#include<bits/stdc++.h>
using namespace std;

void balanced(int n ,int i, char *s, int opn ,int cls){
    if(i==2*n){
        s[i]='\0';
        cout<<s<<endl;
        return ;
        
    }
    // is case mai hum opening bracket aur closing bracket print karenge aur 
    // to number of opening bracket n/2 se zayada nahi hone chahie warna setting kharab ho jaegi 
    // aur opening bracket jab tak closing ke equal nahi ho jata pring karenge closing bracket  




    if(opn>cls){
        s[i]=')';
        balanced(n,i+1,s,opn,cls+1);
    }
    if(opn<n){
        s[i]='(';
        balanced(n,i+1,s,opn+1,cls);
    }
   
}


int main(){
    int n;
    cin >>n;
    char s[100];
   balanced(n,0,s,0,0);
    

}