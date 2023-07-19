#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>

int main(int argc) {
    FILE *f_1;
    FILE *f_2;
    uint32_t a;
    uint32_t b;
    uint32_t plus;

    f_1 = fopen("a.bin", "rb");
    f_2 = fopen("b.bin", "rb");

    fread(&a, sizeof(a), 1, f_1);
    fread(&b, sizeof(b), 1, f_2);

    a = ntohl(a);
    b = ntohl(b);  

    plus = a + b;

    printf("%u / 0x%x\n",plus, plus);
    
    fclose(f_1);    fclose(f_2);
    return 0;
}
