#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
int var_3 = 1265227234;
unsigned long long int var_12 = 11045444339020354281ULL;
signed char var_13 = (signed char)-16;
short var_18 = (short)-5419;
unsigned short var_19 = (unsigned short)50847;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -6647212890277321850LL;
void init() {
}

void checksum() {
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
