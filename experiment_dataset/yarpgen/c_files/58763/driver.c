#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)30885;
int var_8 = -343343411;
unsigned char var_10 = (unsigned char)212;
int zero = 0;
unsigned char var_16 = (unsigned char)170;
unsigned char var_17 = (unsigned char)61;
_Bool var_18 = (_Bool)1;
int var_19 = 595271029;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
