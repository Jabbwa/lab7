#include<iostream>

using namespace std;
int adiff(int a, int b){
    int x, y, c, result;
    x=a%360;
    y=b%360;
    if (x>y)
    {
      c=x-y;
    }else{
      c=y-x;
    }
    if (c>180)
    {
        result=360-c;
    }else{
      result=c;
    }
    
    return result;
     
}

int main(){
  cout << adiff(60,244);

}
