#include<iostream>
using namespace std;

class Pair{
      public :
      int first;
      int second;
};

int main(){

      Pair p1;
      p1.first = 10;
      p1.second = 20;
      Pair p2(p1);

      Pair p3(p2);  //copy constructor get called.
      
      cout << p3.first << " " << p3.second << endl;
}
