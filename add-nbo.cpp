#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]) {
    FILE *f_1;
    FILE *f_2;
    uint32_t a;
    uint32_t b;
    uint32_t plus;

    f_1 = fopen(argv[1], "rb");
    f_2 = fopen(argv[2], "rb");

    fread(&a, sizeof(a), 1, fp1);
    fread(&b, sizeof(b), 1, fp2);

    a = ntohl(a);
    b = ntohl(b);  

    plus = a + b;

    printf("%u(0x%x)\n",sum, sum);
    
    fclose(f_1);    fclose(f_2);
    return 0;
}
