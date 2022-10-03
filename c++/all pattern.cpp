#include<bits/stdc++.h>

using namespace std;

int main(){
    //cout <<" one "<< endl ;
    int n;
    cin >>n; 
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"* ";
        }
        cout << endl;
    }


//////// REVERSING THE PATTERN 
//cout <<" two "<< endl ;
  for(int i=1;i<=n;i++){
      for ( int j=i;j>=1;j--){
          cout <<"* ";
      }
      cout <<endl ;
  }

//again 
//cout <<" three "<< endl ;

  for(int i=1;i<=n;i++){
      for ( int j=1;j<=n;j++){
          if(j<=n-i){
              cout <<" ";
          }
          else{
              cout<<"*";
          }
      }
      cout <<endl ;
  }

  // ek aur dekh lo 
 // cout <<" four "<< endl ;
  for(int i=n;i>=1;i--){
      for(int j=1;j<=n;j++){
          if(j<=n-i){
              cout<<" ";
          }
          else{
              cout<<"*";
          }
      }
      cout<<endl;
  }

  /////titli  wala pattern 
  
  for(int i=1;i<=n;i++){
   for(int j=1;j<=i;j++){
     cout<<"*";
   }
   int s=2*n-2*i;
   
     for(int j=1;j<=s;j++){
       cout<<" ";
     }
     for(int j=1;j<=i;j++){
     cout<<"*";
   }
   
   cout<<endl;

 }
 for(int i=n;i>=1;i--){
     
   for(int j=1;j<=i;j++){
     cout<<"*";
   }
   int s=2*n-2*i;
   
     for(int j=s;j>=1;j--){
       cout<<" ";
     }
     for(int j=1;j<=i;j++){
     cout<<"*";
   }
   cout<<endl;
 }
 // rhombus
 for(int i=1;i<=n;i++){
  for(int j=1;j<=n-i;j++){
    cout<<" ";
  }
  for(int k=1;k<=n;k++){
    cout <<"*";
    }
  
  cout <<endl;
}


 //hollow rhombus
 for(int i=1;i<=n;i++){
  for(int j=1;j<=n-i;j++){
    cout<<" ";
  }
  for(int k=1;k<=n;k++){
    if(k==1||k==n||i==1||i==n)
    {cout<<"*";}
    else{
      cout<<" ";
    }
  }
  cout <<endl;
}

//number pattern (khud dekh le )
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
      cout<<" ";
    }
    for (int j=1;j<=i;j++){
      cout <<j<<" ";
    }
    cout <<endl;

  }
  //palindromic pattern 
   for (int i = 1; i <= n; i++)
  {
    int j;
    for (j = 1; j <= n - i; j++)
    {
      cout << " ";
    }
    int k = i;
    for (; j <= n; j++)
    {
      cout << k--;
    }
    k = 2;
    for (; j <= n + i - 1; j++)
    {
      cout << k++;
    }
    cout << endl;
  }
  //dimond wali shape
  for(int i=1;i<=n;i++){

    for(int j=1;j<=n-i;j++){
      cout <<" ";
    }
    for(int j=1;j<=(2*i)-1;j++){
      cout <<"*";
    }
    cout <<endl ;

  }
  for(int i=n;i>=1;i--){
    for(int j=1;j<=n-i;j++){
      cout <<" ";
    }
    for ( int j=1;j<=2*i-1;j++){
      cout <<"*";
    }
    cout <<endl;
    
  }
  

}
