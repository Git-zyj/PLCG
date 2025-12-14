#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 1075349873248264307ULL;
unsigned long long int var_8 = 1469395408288273271ULL;
int zero = 0;
unsigned int var_18 = 3231692038U;
_Bool var_19 = (_Bool)1;
long long int var_20 = -6621554193953511348LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
