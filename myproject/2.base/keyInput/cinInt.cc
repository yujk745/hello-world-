/*
    이름: cinInt.cc
    설명: cin을 이용하여 정수값 키보드 입력을 받아 출력하는 프로그램.
*/
#include <iostream>

int main(void){
    int yourAge=0;
    std::cout<<"나이를 입력하세요: ";
    std::cin>>yourAge; //입력받음, enter 입력시 종료.
    std::cout<<"나이: "<<yourAge<<"살"<<'\n';
}