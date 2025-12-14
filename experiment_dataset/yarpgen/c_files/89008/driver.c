#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)46;
unsigned long long int var_9 = 12395160041661187332ULL;
unsigned char var_11 = (unsigned char)245;
int var_12 = -1083826991;
int zero = 0;
signed char var_15 = (signed char)49;
unsigned char var_16 = (unsigned char)81;
void init() {
}

void checksum() {
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
