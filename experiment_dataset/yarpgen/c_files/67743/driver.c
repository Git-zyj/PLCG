#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-2483;
signed char var_12 = (signed char)-75;
_Bool var_14 = (_Bool)0;
short var_15 = (short)24316;
int var_16 = -188297836;
int zero = 0;
long long int var_19 = -2524595115247437901LL;
short var_20 = (short)3569;
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
