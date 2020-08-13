#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

vector <int> quicksort(vector<int> v){
    if (v.size() <= 1)
    {
        return v;
    }else
    {
        int basei = rand()%(v.size());
        int base = v[basei];
        vector <int> lv;
        vector <int> rv;
        for (int i = 0; i < v.size(); i++)
        {
            if (i != basei){
            if (v[i]<=base)
            {
                lv.push_back(v[i]);
            }else
            {
                rv.push_back(v[i]);
            }
            } 
        }
        
        v.clear();
        lv = quicksort(lv);
        rv = quicksort(rv);
        v.insert(v.end(),lv.begin(),lv.end());
        v.push_back(base);
        v.insert(v.end(),rv.begin(),rv.end());
        return v;
    }
}

    int main(){
        int n,temp;
        vector <int> v;
        cout<<"输入数组长度："<<endl;
        cin>>n;
        cout<<"输入数组："<<endl;
        for (int i = 0; i < n; i++)
        {
            cin>>temp;
            v.push_back(temp);
        }
        v=quicksort(v);
        cout<<"从小到大排序为："<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<v[i]<<" ";
        } 
        return 0;
    }
    
    
