#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2817206226U;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 18123300557499090658ULL;
short var_14 = (short)13031;
signed char var_15 = (signed char)46;
int zero = 0;
unsigned short var_17 = (unsigned short)17725;
unsigned int var_18 = 4013448430U;
void init() {
}

void checksum() {
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
