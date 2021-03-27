#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;  

int main()
{
    int i,j;
    /*
    vector <int> v;
    cout<<"To exit the loop enter -1 \n";
    cout << "Enter elements of array one by one with a space:";
    int n=0;

    while (1){
        cin>>n;
        if (n==-1)
            break;
        v.push_back(n);
    }
    */
    vector<int> v{2,2,3,3};                                //Comment this line if you want custom input and uncomment upper portion
    sort(v.begin(), v.end(), greater<int>());
    auto start=high_resolution_clock::now();
    for(i=0;i<v.size();++i){
        if(v[i]==i && (i!=0 && v[i]!=v[i-1])){
            cout<<"1";
            return 0;
            }
        if(v.size()-1 ==0 && v[i]==0){
            cout<<"1";
            return 0;
            }
        }
    cout<<"-1";
    auto stop=high_resolution_clock::now();
    auto duration=duration_cast<microseconds>(stop-start);
    cout<<"\n"<<duration.count();
}
    
    