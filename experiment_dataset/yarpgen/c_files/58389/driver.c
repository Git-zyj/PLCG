#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21904;
unsigned int var_1 = 521154201U;
int var_2 = -1149863041;
signed char var_4 = (signed char)66;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 12408071379503862657ULL;
unsigned char var_9 = (unsigned char)23;
short var_10 = (short)7935;
unsigned int var_11 = 2630045821U;
long long int var_14 = 3487068818073580848LL;
int var_16 = 38247968;
int zero = 0;
long long int var_18 = 8448655495938053148LL;
unsigned int var_19 = 4215797232U;
short var_20 = (short)-14212;
_Bool var_21 = (_Bool)1;
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
