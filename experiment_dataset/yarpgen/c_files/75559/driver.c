#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_6 = 2813859015U;
signed char var_7 = (signed char)-70;
unsigned char var_8 = (unsigned char)161;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -4216335010513463384LL;
long long int var_12 = -4302720281297290634LL;
long long int var_13 = 1950992149206681966LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
