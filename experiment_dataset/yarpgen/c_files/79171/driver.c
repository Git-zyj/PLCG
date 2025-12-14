#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)42763;
unsigned short var_11 = (unsigned short)48586;
int var_12 = 1951853658;
unsigned short var_16 = (unsigned short)57570;
int zero = 0;
long long int var_20 = -2201092863019640719LL;
unsigned short var_21 = (unsigned short)43519;
unsigned long long int var_22 = 14913129886892512167ULL;
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
