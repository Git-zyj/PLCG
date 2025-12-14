#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)53911;
unsigned char var_4 = (unsigned char)71;
unsigned int var_13 = 1357082838U;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_17 = 1823128585;
unsigned int var_18 = 2284018763U;
short var_19 = (short)19705;
int var_20 = -1297380315;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
