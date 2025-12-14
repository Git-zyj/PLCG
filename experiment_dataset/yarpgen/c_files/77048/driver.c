#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7011932916326827367ULL;
unsigned short var_3 = (unsigned short)6862;
short var_4 = (short)4627;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)2669;
unsigned short var_14 = (unsigned short)8603;
unsigned int var_15 = 1959986187U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
