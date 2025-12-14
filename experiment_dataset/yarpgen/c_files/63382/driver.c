#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)64;
unsigned int var_2 = 628039179U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 2805952343U;
short var_14 = (short)-5414;
unsigned short var_15 = (unsigned short)30527;
int var_16 = -1124769177;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
