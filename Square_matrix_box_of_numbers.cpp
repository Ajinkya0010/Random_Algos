
#include <iostream>
#include <chrono>
#include <vector>

using namespace std;
using namespace std::chrono;

int main()
{
    int x,d,i,j,a,b;
    cout<<"Enter the largest value you want to display in magical way ";
    cin>>x;
    d=2*x-1;b=d;                                              //This will be the size of Matrix
    int A[d][d];						//Using Arrays
	// vector <vector<int>> A( d , vector<int> (d, 0));      //Using Vector    

    auto start=high_resolution_clock::now();
    
    for(i=0;i<(d+1)/2;++i){
        if(i!=0){
            for(j=0;j<d;j++){
            A[i][j]=A[i-1][j];
            }
        }
        for(j=i;j<b;++j){
            A[i][j]=x;
        }
        for(j=0;j<d;j++){
            A[d-1-i][j]=A[i][j];
        }
        b-=1;x-=1;
    }
    
    auto stop=high_resolution_clock::now();
    auto duration=duration_cast<microseconds>(stop-start);
    
    for(i=0;i<d;++i){
        for(j=0;j<d;++j){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    cout<<duration.count();
    
    
}
