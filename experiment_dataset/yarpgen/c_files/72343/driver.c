#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)13342;
int var_5 = 139110244;
unsigned char var_6 = (unsigned char)135;
_Bool var_7 = (_Bool)1;
unsigned char var_12 = (unsigned char)45;
int zero = 0;
long long int var_13 = -4809059410403603921LL;
long long int var_14 = -5857784485407946718LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
