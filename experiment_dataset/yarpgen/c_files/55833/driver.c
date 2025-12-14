#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)178;
unsigned char var_3 = (unsigned char)191;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)106;
_Bool var_6 = (_Bool)1;
int var_7 = -1791609168;
int var_8 = 229164101;
int var_10 = 1390102287;
int zero = 0;
int var_15 = -684612194;
unsigned char var_16 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
