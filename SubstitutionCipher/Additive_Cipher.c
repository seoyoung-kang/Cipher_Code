#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char AdditiveEncryption(char* P, char* CT, int i){
    for (int j = 0; j < strlen(P); j++){
        CT[j] = ((P[j] - 96 + i) % 26) + 64;
    }
}

char AdditiveDecryption(char* C, char* DT, int i){
    for (int j = 0; j < strlen(C); j++){
        DT[j] = ((C[j] - 64 - i + 26) % 26) + 96;
    }
}

int main(){
    int i;
    char Plaintext[50] = {}, Ciphertext[50] = {}, Decryptiontext[50] = {};

    printf("key를 입력하세요 : ");  scanf("%d",&i);
    printf("plaintext를 입력하세요 : "); scanf("%s", Plaintext);

    printf("평문을 암호화 합니다. : ");
    AdditiveEncryption(Plaintext,Ciphertext, i);
    printf("%s\n", Ciphertext);


    printf("암호문을 복호화 합니다. : ");
    AdditiveDecryption(Ciphertext,Decryptiontext, i);
    printf("%s\n", Decryptiontext);

    return 0;

}

