#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)51006;
signed char var_6 = (signed char)-15;
signed char var_9 = (signed char)15;
unsigned long long int var_11 = 4239125666960481986ULL;
long long int var_12 = 7242766093487518429LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)2076;
short var_15 = (short)-12283;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 4285024242U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
