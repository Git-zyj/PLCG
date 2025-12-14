#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 265324679609823686ULL;
unsigned char var_5 = (unsigned char)66;
_Bool var_7 = (_Bool)1;
int var_9 = 1718482682;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)239;
int zero = 0;
unsigned long long int var_14 = 1152574631587597319ULL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)5;
void init() {
}

void checksum() {
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
