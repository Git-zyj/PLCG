#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-32212;
_Bool var_8 = (_Bool)1;
short var_9 = (short)17814;
int zero = 0;
unsigned int var_17 = 1060634921U;
unsigned long long int var_18 = 6336163804162286078ULL;
int var_19 = 496583001;
unsigned char var_20 = (unsigned char)127;
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
