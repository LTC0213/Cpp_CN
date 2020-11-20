#include <iostream>
 
using namespace std;
 
int main( )
{
   char name[50];
   char age[50];
 
   cout << "请输入您的名称： "<< "请输入您的年龄： ";
   cin >> name >> age;
   cout << "您的名称是： " << name << " 您的年龄是： " << age << endl;
 
}