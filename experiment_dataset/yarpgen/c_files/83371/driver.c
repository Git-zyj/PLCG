#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 16270795385328183403ULL;
unsigned int var_9 = 3498815778U;
unsigned short var_16 = (unsigned short)64979;
unsigned long long int var_18 = 5941430337976922066ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)831;
unsigned short var_21 = (unsigned short)5008;
void init() {
}

void checksum() {
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
