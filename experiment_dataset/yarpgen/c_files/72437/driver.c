#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-88;
_Bool var_7 = (_Bool)1;
int var_10 = -946998200;
int var_11 = 649535128;
unsigned short var_12 = (unsigned short)55649;
int zero = 0;
int var_15 = 1971240351;
int var_16 = -1592373267;
signed char var_17 = (signed char)79;
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
