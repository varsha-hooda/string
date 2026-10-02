#include<iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string str1 = "hello everyone";
   for(char ch : str1){

     cout <<  ch << " ";
    }
    cout << endl;
    return 0;
}
