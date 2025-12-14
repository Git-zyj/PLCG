#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-33;
_Bool var_3 = (_Bool)1;
unsigned int var_12 = 2837269159U;
int zero = 0;
long long int var_14 = 8064405582718293089LL;
unsigned int var_15 = 602331736U;
long long int var_16 = -7090717148284476202LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
