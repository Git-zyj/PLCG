#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
long long int var_8 = -43143616417455639LL;
_Bool var_12 = (_Bool)1;
int var_13 = 875990935;
int zero = 0;
unsigned int var_18 = 394240158U;
int var_19 = -997561568;
int var_20 = -1785720196;
long long int var_21 = 8761827388461083000LL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
