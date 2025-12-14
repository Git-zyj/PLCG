#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -303920174;
unsigned char var_5 = (unsigned char)104;
long long int var_12 = 3180839972075138878LL;
unsigned char var_14 = (unsigned char)94;
unsigned long long int var_16 = 8740539987731680039ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)81;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
