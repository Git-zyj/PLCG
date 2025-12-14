#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)47889;
unsigned char var_5 = (unsigned char)228;
unsigned short var_8 = (unsigned short)30103;
int zero = 0;
unsigned short var_14 = (unsigned short)34936;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -3869529086394284810LL;
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
