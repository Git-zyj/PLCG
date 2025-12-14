#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2881;
unsigned int var_2 = 2995257517U;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)785;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3510996193U;
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
