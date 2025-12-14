#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2012054494;
unsigned short var_4 = (unsigned short)20460;
unsigned int var_7 = 4170988746U;
signed char var_10 = (signed char)-111;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 4796796081483072609ULL;
unsigned short var_17 = (unsigned short)28317;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
