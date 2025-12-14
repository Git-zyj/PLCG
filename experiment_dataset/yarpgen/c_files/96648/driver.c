#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
unsigned long long int var_2 = 2290534301525134008ULL;
unsigned char var_8 = (unsigned char)58;
int zero = 0;
unsigned char var_20 = (unsigned char)212;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)30;
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
