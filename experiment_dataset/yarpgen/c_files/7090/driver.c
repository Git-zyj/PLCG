#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -631252019;
unsigned long long int var_6 = 17503579693104376471ULL;
short var_8 = (short)-4153;
int var_9 = 642487728;
short var_12 = (short)25042;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)25979;
void init() {
}

void checksum() {
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
