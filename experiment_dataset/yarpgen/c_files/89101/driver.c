#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned long long int var_13 = 17157263447893982802ULL;
unsigned long long int var_16 = 9667774850254766164ULL;
int zero = 0;
unsigned int var_20 = 2962661639U;
int var_21 = -1768182074;
unsigned int var_22 = 1110415066U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
