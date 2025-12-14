#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)184;
signed char var_4 = (signed char)96;
unsigned int var_6 = 4154938630U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 817101979U;
unsigned int var_15 = 1363543258U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
