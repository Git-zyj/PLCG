#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)1;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 4172066627U;
unsigned long long int var_6 = 16899293202664686190ULL;
signed char var_7 = (signed char)-92;
signed char var_11 = (signed char)-80;
unsigned char var_12 = (unsigned char)248;
int zero = 0;
unsigned short var_15 = (unsigned short)58281;
int var_16 = -1085374251;
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
