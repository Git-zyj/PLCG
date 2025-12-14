#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 1711845086U;
long long int var_6 = -7947924784427955616LL;
_Bool var_7 = (_Bool)1;
int var_8 = -992919198;
short var_9 = (short)16200;
long long int var_11 = -8153105249360878849LL;
short var_12 = (short)1899;
long long int var_13 = 3502512920466531087LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -2045614198;
unsigned char var_16 = (unsigned char)17;
long long int var_17 = -6021647099600495550LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
