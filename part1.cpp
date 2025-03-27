/*
Without using classes, write a program to calculate the perimeter 
of shapes. The program must accept from user input the number of sides
the shape from the user and the length of each side, then calculate the 
perimeter, and display the result. 

Note: All sides are not necessarily same the length.
Note: All sides are integers.
 */

 #include <iostream>

 using namespace std;

int main()
{
    cout<<"Part 1"<<endl; //do not remove, edit, or change the placement of this line.
   

   int sides;
   double lenght;
   double perimeter=0.0;
     cout<<"Enter the number of sides the shape has:";
     cin>>sides;
  for(int i=0;i<sides;i++)
  {
  cout<<"Enter lenght:";
  cin>>lenght;
  perimeter+=lenght;//since the general formula of perimeter is the sum of all sides
  }
cout<<"Perimeter:"<<perimeter<<endl;

    return 0;
    return 0;
 }
