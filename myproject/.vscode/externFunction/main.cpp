#include <iostream>
using namespace std;

int abc(int x, int y){
    return x*y;
}

int main(){
    int (*ptr)(int, int) = (int (*)(int, int))00401460;
    cout<<ptr(5,2)<<endl;
    printf("0x%p",&abc);

} 