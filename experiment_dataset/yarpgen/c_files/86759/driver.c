#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)38;
_Bool var_7 = (_Bool)1;
unsigned short var_12 = (unsigned short)20953;
int zero = 0;
long long int var_14 = -8208463014907262801LL;
int var_15 = -1666441814;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
