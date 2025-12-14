#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2708691514U;
unsigned char var_1 = (unsigned char)143;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)234;
signed char var_5 = (signed char)82;
unsigned char var_10 = (unsigned char)207;
unsigned int var_11 = 3383937756U;
unsigned int var_14 = 2189643025U;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 6163418027343146436ULL;
int var_17 = -1406912603;
void init() {
}

void checksum() {
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
