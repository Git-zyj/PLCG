#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1629921241;
unsigned char var_3 = (unsigned char)222;
unsigned int var_4 = 2998808966U;
unsigned char var_7 = (unsigned char)165;
long long int var_12 = 6683807816694898164LL;
unsigned int var_13 = 3444165958U;
int zero = 0;
int var_14 = -796111126;
_Bool var_15 = (_Bool)0;
short var_16 = (short)25072;
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
