#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)48;
long long int var_3 = -4206742324065346108LL;
short var_4 = (short)16195;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)33567;
unsigned int var_15 = 3685898409U;
int zero = 0;
unsigned int var_16 = 2931895629U;
unsigned short var_17 = (unsigned short)46146;
short var_18 = (short)18198;
void init() {
}

void checksum() {
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
