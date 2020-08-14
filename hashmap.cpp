#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, string> contactbook = {
        {"jinna", "7785577455"},
        {"sasa", "7745573412"}
    };

    for (auto& m : contactbook)
    {
        cout<<"Name: "<<m.first<<" Phone: "<<m.second<<endl;
    }

    contactbook["lala"]="1617681001";
    contactbook["dingding"]="778132580";

    cout<<"dingding's phone number is "<<contactbook["dingding"]<<endl;
    cout<<"sasa's phone number is "<<contactbook["sasa"]<<endl;
    cout<<"输入你要查找的人："<<endl;

    string name;
    cin>>name;
    auto search = contactbook.find(name);
    if (search!=contactbook.end())
    {
        cout<<name<<"'s phone number is "<<contactbook[name]<<endl;
    }else
    {
        cout<<name<<" don't exist in the contact book"<<endl;
    }
    
    
}