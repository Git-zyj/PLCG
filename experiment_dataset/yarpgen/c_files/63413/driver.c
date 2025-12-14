#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21541;
unsigned int var_7 = 4168944985U;
long long int var_16 = -2395172356125169167LL;
int zero = 0;
unsigned short var_20 = (unsigned short)7387;
unsigned int var_21 = 2296300203U;
unsigned long long int var_22 = 837623931732767989ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
