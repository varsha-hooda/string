#include<iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string str1 = "hello everyone";
   for(int i = 0 ; i<str1.length() ;  i++){

     cout <<  str1[i] << " ";
    }
    cout << endl;
    return 0;
}
