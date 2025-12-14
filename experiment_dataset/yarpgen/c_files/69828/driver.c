#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)173;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)11849;
int var_8 = 1495304997;
unsigned short var_11 = (unsigned short)33972;
long long int var_12 = 116890243919420836LL;
int zero = 0;
signed char var_14 = (signed char)3;
signed char var_15 = (signed char)102;
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
