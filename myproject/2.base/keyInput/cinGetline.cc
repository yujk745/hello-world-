/*
    �̸�: cinGetline.cc
    ����: cin.getline() �Լ��� �̿��Ͽ� ������ �Է¹޴� ���α׷�.
*/
#include <iostream>
#include <cstring>

int main(void){
    char sentence[256];
    char* inputSentence = sentence;

    std::cout<<"�Է�: ";
    std::cin.getline(inputSentence,255);
    std::cout<<"�Է��� ����: "<<inputSentence<<'\n';
    std::cout<<"���� ����  : "<<strlen(inputSentence)<<'\n';
    return 0;
}