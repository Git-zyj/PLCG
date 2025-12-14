#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_6 = 17494227941483948081ULL;
unsigned long long int var_9 = 16898524937016527451ULL;
unsigned int var_10 = 2995437615U;
int zero = 0;
unsigned int var_15 = 673769619U;
int var_16 = 814301235;
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
