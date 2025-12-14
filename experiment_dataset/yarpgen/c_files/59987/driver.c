#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3277394312U;
signed char var_5 = (signed char)-49;
long long int var_7 = -121599143166818873LL;
unsigned int var_11 = 1584016573U;
int zero = 0;
int var_14 = -1427442084;
unsigned char var_15 = (unsigned char)102;
_Bool var_16 = (_Bool)0;
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
