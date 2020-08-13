#include <iostream>
#include <vector>
using namespace std;

int binary_s(vector <int> l, int t){
    int highloc = l.size() - 1;
    int lowloc = 0;
    int midloc = (highloc-lowloc)/2+lowloc;

    while (lowloc<=highloc)
    {
        if (t<l[midloc])
        {
            highloc = midloc-1;
        }else if (t>l[midloc])
        {
            lowloc = midloc+1;
        }else if (t == l[midloc])
        {
            return midloc;
        }
        
        midloc = (highloc-lowloc)/2+lowloc;
    }
    return -1;
}

int main(){
    int n,temp,t,loc;
    vector <int> v;

    cout<<"请输入列表中数字个数:"<<endl;
    cin>>n;
    cout<<"请输入列表中数字(由小到大):"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    
    cout<<"输入想查找位置的数字："<<endl;
    cin>>t;

    loc = binary_s(v,t);
    if (loc>=0)
    {
        cout<<"数字"<<t<<"的位置是"<<loc<<endl;
    }else
    {
        cout<<"数字"<<t<<"不存在在该列表中"<<endl;
    }
     

}