#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -6802859321920186212LL;
short var_10 = (short)-6820;
short var_11 = (short)-3681;
int zero = 0;
unsigned int var_13 = 904891359U;
short var_14 = (short)7576;
int var_15 = 1883404240;
unsigned int var_16 = 3164924284U;
long long int var_17 = -3772219821534924967LL;
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
