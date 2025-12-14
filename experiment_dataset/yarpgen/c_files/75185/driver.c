#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3317728484U;
unsigned long long int var_5 = 13645135679939780336ULL;
short var_7 = (short)-10786;
short var_10 = (short)-32260;
int zero = 0;
unsigned long long int var_11 = 16920935126702614614ULL;
unsigned long long int var_12 = 13317666707823320677ULL;
unsigned long long int var_13 = 9986925287206647102ULL;
unsigned int var_14 = 573680076U;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
