#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-19997;
unsigned char var_11 = (unsigned char)164;
_Bool var_15 = (_Bool)0;
unsigned long long int var_17 = 11668405327499567252ULL;
int zero = 0;
unsigned int var_18 = 3401892559U;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2194132235U;
unsigned char var_21 = (unsigned char)48;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
