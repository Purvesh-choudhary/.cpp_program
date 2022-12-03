#include <iostream>
using namespace std;

class user
{
  private:
  int pass;
  
  public:
  int setPass(int p)
  {
    pass=p;
  }
  int getPass()
  {
    return pass;
  }
};

int main() 
{
  user u1;
  int p1;
  cout<<"Enter pass : ";
  cin>>p1;
  u1.setPass(p1);
  cout<<"Your Pass is "<<u1.getPass();
  return 0;
}
