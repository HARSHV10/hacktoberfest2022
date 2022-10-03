#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=0;
    for(int i=0;i<n;i++){
        a=a^arr[i];

    }
    int result = a;
    // now we get the xor of both of the unique element
    // now to get the the position of the first bit 
    int b=1;
    int ans =0 ;
    int pos=1;
    while(a>0){
        
        if((a&b)>0){
            break;
        }
        a=a>>1;
        pos++;       
        
    }
    int x=(1<<pos);
    int uq=0;
    for(int i=0;i<n;i++){
        if((arr[i]&x)>0){
            uq=uq^arr[i];
        }
    }
    cout<<uq<<endl;
    cout<<(result^uq)<<endl;
}
