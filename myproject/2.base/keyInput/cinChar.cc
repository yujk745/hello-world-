#include <iostream>

int main(void){
    char name[16];
    char* yourName = name;

    std::cout<<"이름을 입력하세요: ";
    std::cin>>yourName;
    std::cout<<"이름: "<<yourName<<'\n';
}