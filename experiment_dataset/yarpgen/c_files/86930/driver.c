#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)1554;
unsigned short var_9 = (unsigned short)20843;
int var_10 = 415424089;
long long int var_14 = 1846505607524413194LL;
int zero = 0;
unsigned short var_19 = (unsigned short)59262;
signed char var_20 = (signed char)-36;
unsigned short var_21 = (unsigned short)35165;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
