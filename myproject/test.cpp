#include <iostream>
#include <string>
using namespace std;

int main(){
    char* context = "hi there!";
    cout<<context<<endl;
    cout<<context[0]<<endl;
    cout<<&context<<endl;
    cout<<*context<<endl;
    cout<<(int)context<<endl;
}