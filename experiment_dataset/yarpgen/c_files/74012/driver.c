#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1012371196U;
unsigned int var_5 = 854010532U;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)88;
unsigned char var_9 = (unsigned char)16;
unsigned int var_10 = 2044869838U;
int zero = 0;
signed char var_12 = (signed char)53;
unsigned int var_13 = 4197220747U;
unsigned int var_14 = 2391590902U;
unsigned long long int var_15 = 3830799236467310025ULL;
_Bool var_16 = (_Bool)1;
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
