#include<iostream>  
#include<string>  
#include<cctype>  
using namespace std;  
  
int main()
{
    string str("some string");  
    // range for 语句  
    for(char &x : str)
    {  
        x *= 2;
        cout << x << endl;
    }  
    return 0; 
}

 

