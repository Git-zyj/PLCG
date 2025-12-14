#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1227071045U;
int var_6 = -48550552;
unsigned char var_9 = (unsigned char)120;
unsigned long long int var_13 = 9665550527249425000ULL;
signed char var_14 = (signed char)-73;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 16079562397741460283ULL;
int var_17 = -1185772762;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
