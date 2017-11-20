/*
    이름: namespace.cc
    설명: 같은 이름의 함수를 서로 다른 네임스페이스에 할당하여 각각 사용해보는 프로그램.
*/
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