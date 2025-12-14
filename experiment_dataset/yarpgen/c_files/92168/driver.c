#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 819214309209026520LL;
unsigned char var_3 = (unsigned char)73;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1019735125U;
short var_7 = (short)12663;
int zero = 0;
long long int var_10 = -6584196883873147017LL;
signed char var_11 = (signed char)-26;
unsigned char var_12 = (unsigned char)33;
short var_13 = (short)23544;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
