#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2349188134U;
unsigned char var_1 = (unsigned char)227;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)55171;
_Bool var_6 = (_Bool)0;
int var_8 = -1039679360;
unsigned short var_11 = (unsigned short)1465;
int var_13 = -2112855612;
int zero = 0;
unsigned int var_14 = 2573329579U;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
