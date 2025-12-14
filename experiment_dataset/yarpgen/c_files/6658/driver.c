#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2392574789U;
long long int var_2 = -7731448803703117349LL;
_Bool var_6 = (_Bool)0;
long long int var_10 = -5975598214001912439LL;
int zero = 0;
unsigned int var_15 = 782532413U;
unsigned int var_16 = 2914296740U;
unsigned int var_17 = 4108646019U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
