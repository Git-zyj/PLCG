#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)58944;
unsigned int var_4 = 1773988539U;
signed char var_8 = (signed char)-96;
signed char var_9 = (signed char)-83;
unsigned int var_10 = 842708248U;
unsigned char var_12 = (unsigned char)157;
int zero = 0;
unsigned short var_14 = (unsigned short)59922;
unsigned short var_15 = (unsigned short)12903;
short var_16 = (short)-6459;
signed char var_17 = (signed char)-112;
unsigned int var_18 = 2998379129U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
