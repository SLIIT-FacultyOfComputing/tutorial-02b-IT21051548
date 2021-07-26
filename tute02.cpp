#include <iostream>
using namespace std;
int main()
{
   double salary, netSalary;
   int etype, otHrs, otRate;
   cout << "enter employee type : ";
   cin >> etype;
   cout << "enter salary : ";
   cin >> salary;
   cout << "enter othrs : ";
   cin >> otHrs; 
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs* otRate;
   cout << "net salary is " << netSalary;
  
   return 0;
}