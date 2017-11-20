/*
    이름: cinChar.cc
    설명: cin을 이용하여 Char형 키보드 입력을 받아 출력하는 프로그램.
*/
#include <iostream>

int main(void){
    char name[16]; //입력값이 저장될 배열
    char* yourName = name; //name 배열을 가리키는 포인터

    std::cout<<"이름을 입력하세요: ";
    std::cin>>yourName; //입력받음
    std::cout<<"이름: "<<yourName<<'\n';
}