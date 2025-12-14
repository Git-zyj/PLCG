#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3178240674U;
unsigned long long int var_2 = 12533810786058802764ULL;
short var_3 = (short)-3291;
long long int var_4 = -5262288267530685996LL;
short var_5 = (short)17453;
unsigned int var_6 = 2499047497U;
signed char var_7 = (signed char)66;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)175;
unsigned int var_13 = 1243280088U;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)61756;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
