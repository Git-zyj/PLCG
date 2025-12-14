#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -8152831486637269572LL;
unsigned short var_6 = (unsigned short)3124;
int var_9 = -2104324511;
_Bool var_15 = (_Bool)0;
short var_17 = (short)-26993;
int zero = 0;
signed char var_20 = (signed char)-61;
unsigned char var_21 = (unsigned char)132;
unsigned long long int var_22 = 12677087259222318419ULL;
unsigned long long int var_23 = 7217952286103369284ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
