#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2021610708;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 1295059271U;
int zero = 0;
long long int var_14 = 7014051112472661629LL;
long long int var_15 = -9076069332171923929LL;
short var_16 = (short)6552;
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
