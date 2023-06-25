#include<bits/stdc++.h>
using namespace std;
class myStack{
    vector<int>v;
    public:
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        if(v.size()==0) return true;
        else return false;
    }

};
int main(){
    myStack v;
    int n;
    cin>>n;
    for(int i =0; i<n; i++){
        int x;
        cin>>x;
        v.push(x);
    }
    while(v.empty()==false){
        cout<<v.top()<<endl;
        v.pop();
    }
    
    return 0;
}