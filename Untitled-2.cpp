#include <iostream>
#include<string.h>
using namespace std;
int main()
    {
        string name;
        int count=0;
        cout<<"Enter your name:";
        getline(cin,name);
        for(int i=0;name[i]!='\0';i++){
            count++;
        }
        cout<<"The length of the string is:"<<count;
        return 0;
    }