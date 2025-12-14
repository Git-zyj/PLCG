#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)106;
unsigned short var_1 = (unsigned short)52084;
signed char var_5 = (signed char)28;
short var_6 = (short)5153;
unsigned short var_8 = (unsigned short)23101;
unsigned char var_10 = (unsigned char)69;
short var_11 = (short)-2514;
int zero = 0;
unsigned char var_16 = (unsigned char)62;
unsigned char var_17 = (unsigned char)250;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
