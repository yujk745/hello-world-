/*
    �̸�: cinInt.cc
    ����: cin�� �̿��Ͽ� ������ Ű���� �Է��� �޾� ����ϴ� ���α׷�.
*/
#include <iostream>

int main(void){
    int yourAge=0;
    std::cout<<"���̸� �Է��ϼ���: ";
    std::cin>>yourAge; //�Է¹���, enter �Է½� ����.
    std::cout<<"����: "<<yourAge<<"��"<<'\n';
}