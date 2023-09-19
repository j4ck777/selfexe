#include<stdio.h>
#include <openssl/evp.h>
#include<string.h>

#define ENCRYPT 1
#define DECRYPT 0


int main(){

    unsigned char key[] = "0123456789ABCDEF";
    unsigned char iv[]  = "1111111111111111";

    EVP_CIPHER_CTX*ctx = EVP_CIPHER_CTX_new();
    EVP_CipherInit(ctx, EVP_aes_128_cbc(), key, iv, ENCRYPT);

    unsigned char plaintext[] = "This is the plaintext to encrypt.";
    unsigned char ciphertext[48];

    int update_len, final_len;
    int ciphertext_len = 0;

    EVP_CipherUpdate(ctx, ciphertext, &update_len, plaintext, strlen(plaintext)); 
    ciphertext_len+=update_length;
    printf("update size: %d\n", ciphertext_len);

    EVP_CiphertextFinal_ex(ctx, ciphertextciphertext_len, &final_len);
    ciphertext_len+=final_len;

    EVP_CIPHER_CTX_free(ctx);

    printf("Ciphertext length = %d\n ", ciphertext_len);
    for(int i=0; i<ciphertext_len; i++){
        printf("%02x", ciphertext[i]);
    }
    printf('\n');
    
    return 0;
}