#include <iostream>
#include <cstring>

int main(void){
    char sentence[256];
    char* inputSentence = sentence;

    std::cout<<"입력: ";
    std::cin.getline(inputSentence,255);
    std::cout<<"입력한 문장: "<<inputSentence<<'\n';
    std::cout<<"문장 길이  : "<<strlen(inputSentence)<<'\n';
    return 0;
}