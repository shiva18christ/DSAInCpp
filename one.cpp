#include<iostream>
using namespace std;
class recursion{
  public:
  int factorial(int n){
    if(n<=1){
      return 1;
    }
    return n*factorial(n-1);
  }
};
int main(){
  recursion re;
  cout<<re.factorial(5);

  return 0;
}
