#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18277037724884561705ULL;
unsigned int var_4 = 2676579108U;
unsigned int var_5 = 1619748527U;
unsigned int var_6 = 2667600074U;
short var_7 = (short)29588;
int var_8 = 2106946222;
unsigned int var_9 = 1228199644U;
int zero = 0;
unsigned long long int var_11 = 3037506142612243809ULL;
long long int var_12 = -562720115678953314LL;
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
