#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1720862291;
signed char var_2 = (signed char)-97;
unsigned char var_3 = (unsigned char)7;
unsigned char var_4 = (unsigned char)44;
unsigned char var_5 = (unsigned char)248;
unsigned char var_6 = (unsigned char)197;
signed char var_8 = (signed char)21;
signed char var_10 = (signed char)-25;
unsigned int var_11 = 635588030U;
unsigned int var_12 = 362894455U;
unsigned char var_14 = (unsigned char)234;
int zero = 0;
unsigned char var_17 = (unsigned char)15;
unsigned char var_18 = (unsigned char)184;
int var_19 = -173157395;
unsigned char var_20 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
