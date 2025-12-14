#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_8 = (_Bool)0;
signed char var_12 = (signed char)17;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 15529322740634041158ULL;
unsigned char var_19 = (unsigned char)182;
unsigned short var_20 = (unsigned short)43080;
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
