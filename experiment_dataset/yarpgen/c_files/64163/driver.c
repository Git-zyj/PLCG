#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 14769092845913196453ULL;
long long int var_13 = -3062316517143209381LL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = 1386536269;
int var_21 = 472285090;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
