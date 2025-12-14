#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
int var_12 = 171036364;
unsigned char var_13 = (unsigned char)73;
int var_14 = -148119020;
unsigned int var_15 = 4174269647U;
int zero = 0;
unsigned char var_16 = (unsigned char)115;
int var_17 = 2059135159;
signed char var_18 = (signed char)40;
void init() {
}

void checksum() {
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
