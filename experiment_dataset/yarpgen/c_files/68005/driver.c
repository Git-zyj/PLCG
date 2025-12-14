#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31065;
unsigned short var_4 = (unsigned short)7485;
unsigned char var_6 = (unsigned char)65;
unsigned int var_9 = 3833361455U;
unsigned char var_11 = (unsigned char)242;
signed char var_12 = (signed char)51;
int var_13 = 137883264;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)20;
signed char var_17 = (signed char)16;
unsigned int var_18 = 3210437145U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
