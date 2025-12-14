#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28762;
_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 2444205111341919970ULL;
short var_8 = (short)-7952;
_Bool var_9 = (_Bool)0;
int var_10 = 1137941169;
unsigned char var_14 = (unsigned char)118;
int zero = 0;
signed char var_15 = (signed char)-50;
signed char var_16 = (signed char)125;
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
