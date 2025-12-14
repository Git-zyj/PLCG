#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3910364120099191814ULL;
unsigned char var_1 = (unsigned char)92;
unsigned char var_2 = (unsigned char)4;
short var_3 = (short)8897;
unsigned char var_5 = (unsigned char)255;
unsigned int var_6 = 3391741028U;
unsigned short var_10 = (unsigned short)40808;
int zero = 0;
short var_13 = (short)-16400;
unsigned short var_14 = (unsigned short)34360;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
