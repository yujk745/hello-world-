#include <iostream>

namespace funcNum1{
    int a(int x){
        return x*x;
    }
}

namespace funcNum2{
    int a(int x){
        return x-(x*x);
    }
}

int main(void){
    //std::cout<<a(5)<<'\n'; //에러!!
    std::cout<<funcNum1::a(5)<<'\n'; //25
    std::cout<<funcNum2::a(5)<<'\n'; //-20
    return 0;
}