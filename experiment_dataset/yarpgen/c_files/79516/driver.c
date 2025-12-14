#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
_Bool var_4 = (_Bool)1;
int var_5 = -683820685;
signed char var_10 = (signed char)64;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 915167796U;
unsigned char var_17 = (unsigned char)61;
void init() {
}

void checksum() {
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
