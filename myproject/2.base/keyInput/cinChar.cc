/*
    �̸�: cinChar.cc
    ����: cin�� �̿��Ͽ� Char�� Ű���� �Է��� �޾� ����ϴ� ���α׷�.
*/
#include <iostream>

int main(void){
    char name[16]; //�Է°��� ����� �迭
    char* yourName = name; //name �迭�� ����Ű�� ������

    std::cout<<"�̸��� �Է��ϼ���: ";
    std::cin>>yourName; //�Է¹���
    std::cout<<"�̸�: "<<yourName<<'\n';
}