#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4497752137756351022LL;
short var_3 = (short)20745;
long long int var_4 = 7242258163755611053LL;
int var_5 = -1137293063;
unsigned int var_8 = 1908840679U;
int zero = 0;
unsigned long long int var_12 = 15052129482384002025ULL;
short var_13 = (short)7661;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
