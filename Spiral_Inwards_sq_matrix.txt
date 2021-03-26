// A simple program to print the elements of square matrix spirally inwards
#include <iostream>
#include <chrono>
#include <vector>

using namespace std;
using namespace std::chrono;

int main() {
    int n,i,j;
    cout << "Enter the size of matrix: ";               //Matrix is a sqaure matrix 
    cin>>n;
    vector <int> D;
    int A[n][n];
    int a=0,k=n;                                          //Iterating over rows
    int b=0,l=n;                                         //Iterating over columns
    
    
    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            cout<<"Enter the value of A["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
        }
    }
    /*
    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            cout<<A[i][j]<<" ";                       //To check if input is read properly
        }
        cout<<"\n";
    }
    */
    auto start = high_resolution_clock::now();                 

    while(1){
        
        i=a;
        for(j=b;j<l;++j){
            D.push_back(A[i][j]);
            if(j==(l-1)){
                a+=1;
            }
        }
        
         
        if(D.size()==(n*n)){
            break;
        }
        
        j=l-1;
        for(i=a;i<k;++i){
            D.push_back(A[i][j]);
            if(i==k-1){
                l-=1;
            }
        }
        
        if(D.size()==(n*n)){
            break;
        }
        
        i=k-1;
        for(j=(l-1);j>=b;--j){
            D.push_back(A[i][j]);
            if(j==b){
                k-=1;
            }
        }
        
         
        if(D.size()==(n*n)){
            break;
        }       
       
        j=b;
        for(i=(k-1);i>=a;--i){
            D.push_back(A[i][j]);
            if(i==a){
                b+=1;
            }
        }
        
        if(D.size()==(n*n)){
            break;
        }
    }
    
    auto stop=high_resolution_clock::now();
    auto duration =duration_cast<microseconds>(stop - start);
    for (auto i = D.begin(); i != D.end(); ++i){
        cout << *i << " ";
    }
    
    cout<<"\n Time taken is "<<duration.count()<< " microseconds";
    
}