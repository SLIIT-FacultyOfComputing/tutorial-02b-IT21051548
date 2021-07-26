#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
long Factorial(int no)
{
  int i;
  long a = 1;
  for(i=no; i >= 1; i--)
  {
    a=a*i;
  }

  return a;
}
long nCr(int n , int r)
{
  int i , f;
  int b = 1;
  long NCR;
  f = Factorial(n);
  for(i=r; i >= 1; i--)
  {
    b = b*i;
  }
  int c=1;
  for(i=n-r; i >= 1; i--)
  {
    c = c*i;
  }
  NCR = f / (b*c);

  return NCR;
}