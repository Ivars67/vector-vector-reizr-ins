#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int n;
    
    cout<<"Ievadi skaitli reizrēķinam: "<<endl;
    cin>>n;
    cout<<endl<<endl;
    
    vector<vector<int>> reiz (n, vector<int> (n));
    
    //aizpilda tabulu
    for(int i=0; i<n; i++){
        
        for(int j=0; j<n; j++){

            //jo sākas no 0
            reiz[i][j] = (i+1) * (j+1);
            
        }
    }
    
    //izprintē tabulu
    for(int i=0; i<n; i++){
        
        for(int j=0; j<n;j++){
            
            cout<<reiz[i][j]<<" ";
            
        }
        
        cout<<endl;
        
    }
    
    return 0;
    
}
