#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1809910670U;
int var_1 = 1877086392;
unsigned char var_6 = (unsigned char)106;
unsigned char var_7 = (unsigned char)125;
unsigned char var_8 = (unsigned char)30;
unsigned long long int var_10 = 17359521746467231637ULL;
signed char var_12 = (signed char)116;
int zero = 0;
unsigned short var_15 = (unsigned short)29350;
short var_16 = (short)-8968;
unsigned char var_17 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
