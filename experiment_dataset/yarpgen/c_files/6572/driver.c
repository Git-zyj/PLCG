#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5285682579226234080LL;
int var_3 = 332022306;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned char var_11 = (unsigned char)111;
int var_12 = 1878734149;
int zero = 0;
short var_13 = (short)-20661;
unsigned int var_14 = 2141136623U;
unsigned char var_15 = (unsigned char)251;
unsigned char var_16 = (unsigned char)71;
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
