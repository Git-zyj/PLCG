#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)250;
int var_3 = 2140823383;
int var_7 = 1027688570;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_16 = -441462585;
unsigned short var_17 = (unsigned short)49861;
unsigned short var_18 = (unsigned short)18557;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
