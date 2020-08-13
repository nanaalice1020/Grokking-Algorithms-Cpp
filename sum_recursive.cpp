#include <iostream>
#include <vector>
using namespace std;

int sum_r(vector <int> num){
    if (num.size()==0)
    {
        return 0;
    }else
    {
        int temp = num.back();
        num.pop_back();
        return temp+sum_r(num);
    }   
}

int main(){
    vector <int> num;
    int n,temp;
    cout<<"请输入需要相加的整数个数："<<endl;
    cin>>n;
    cout<<"请输入"<<n<<"个整数："<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        num.push_back(temp);
    }
    cout<<sum_r(num)<<endl;
    
}