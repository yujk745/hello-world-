#include <iostream>

int main(void){
    char name[16];
    char* yourName = name;

    std::cout<<"�̸��� �Է��ϼ���: ";
    std::cin>>yourName;
    std::cout<<"�̸�: "<<yourName<<'\n';
}