#include <bits/stdc++.h> 
#include <iostream>
#include<cstring>
#include <math.h> 

using namespace std;

int calcRedundantBits(int m) {
    for (int i=0; i<m; i++){
        if(pow(2,i) >= (m + i + 1)){
            return i ;
        }
    }
        
    
}

int * posRedundantBits(int * data,int r, int n){ 
  
    
    int j = 0;
    int k = 1; 
    int * res;
  

    for (int i=1; i<( n + r+1) ; i++){
        if(i == pow(2,j)){ 
            res = res + '0';
            j += 1;
        }
        else{
            res = res + data[-1 * k]; 
            k += 1;
        }
    }
       //res = reverse(res.begin(), res.end()); 
  
    
    return res;
}

int main()
{
    int r, n;
    int *pos;
    string data;
    cout<<"Enter the no. of bits in you data: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the bits with spaces"<<endl;
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    
    r=calcRedundantBits(n) ;
    cout<<r;
    pos = posRedundantBits(arr, r, n);

    for ( int i = 0; i < 20; i++ ) {
      cout << "*(pos + " << i << ") : ";
      cout << *(pos + i) << endl;
   }
    

    return 0;
}