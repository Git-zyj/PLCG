#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2907441121U;
int var_3 = -1279898441;
_Bool var_4 = (_Bool)1;
long long int var_7 = 3148522055486814525LL;
int zero = 0;
long long int var_11 = -4510196175896938319LL;
short var_12 = (short)16586;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
