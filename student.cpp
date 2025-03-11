#include<iostream.h>
#include<conio.h>
class room
{
     public:
     int l, b, h; //Data memebers
     int calculate_Area()//member function declaration
     {
          return l*b;
     }
     int calculate_volume()//member function
     {
          return l*b*h;
     }
};
void main()
{
     int a, v;
     room r1; //here r1 object created
     r1.l = 40;
     r1.b = 30;
     r1.h = 15; //Values assigned 
     a = r1.calculate_Area(); //Function called
     cout<<"Area of room is: "<<a<<endl;
      v = r1.calculate_volume();//member fun calling
     cout<<"Volume of room is: "<<v<<endl;
     getch();
     }
