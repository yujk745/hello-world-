/*
    이름: multiLine.cc
    설명: 문장의 출력시 줄바꿈을 실험함.
*/
#include <iostream>

int main(void){
    //'\n'과 "\n"이 모두 유효한지 확인하기 위해 모두 사용해봄.
    std::cout<<"Hello"<<'\n'<<"World!"<<"\n"<<"end."<<std::endl;
    return 0;
}