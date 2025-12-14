#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)0;
long long int var_11 = 5659519530154349639LL;
signed char var_15 = (signed char)-114;
int zero = 0;
unsigned int var_17 = 2636078307U;
unsigned int var_18 = 3150402894U;
unsigned long long int var_19 = 7670105049573882835ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
