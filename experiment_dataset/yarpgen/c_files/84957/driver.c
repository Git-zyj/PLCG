#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1065431515;
unsigned int var_7 = 2667798470U;
unsigned int var_9 = 754674040U;
long long int var_10 = 1079387875936129533LL;
int zero = 0;
long long int var_15 = -5712797280237676227LL;
long long int var_16 = -5475555755409898633LL;
void init() {
}

void checksum() {
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
