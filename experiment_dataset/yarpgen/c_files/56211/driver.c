#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 42002113;
unsigned int var_2 = 821709969U;
short var_4 = (short)-7271;
unsigned short var_5 = (unsigned short)65373;
signed char var_6 = (signed char)116;
unsigned int var_7 = 4016274831U;
long long int var_9 = 4574834869670457156LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = -1609178929;
unsigned char var_14 = (unsigned char)146;
unsigned int var_15 = 1597837753U;
unsigned long long int var_16 = 3286893909592335341ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
