#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-7366;
unsigned short var_3 = (unsigned short)63686;
unsigned long long int var_6 = 797524251880317702ULL;
unsigned int var_9 = 2235093468U;
short var_13 = (short)8477;
int var_17 = 1788382639;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)33;
unsigned short var_22 = (unsigned short)8543;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
