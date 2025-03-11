#include<iostream.h>
#include<conio.h>
class employes{

{
     public:
     int id;
     int salary;
     char name;
}
void get_info()
{
     cout<<"Enter the employ id: ";
     cin>>id;
     cout<<"Enter the employ salary: ";
     cin>>salary;
     cout<<"Enter the employ name: ";
     cin>>name;
}
void display_info()
{
     cout<<"The employ id is: "<<id<<endl;
     cout<<"The employ salary is: "<<salary<<endl;
     cout<<"The employ name is: "<<name<<endl;
}
};
int main()
{
     employes s;
     s.get_info();
     s.display_info();
     return 0;
}