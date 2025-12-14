#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)162;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 733150218U;
unsigned long long int var_7 = 7491028051424351593ULL;
unsigned char var_10 = (unsigned char)88;
int var_12 = -241195147;
int zero = 0;
unsigned long long int var_14 = 1291964678297385611ULL;
unsigned char var_15 = (unsigned char)172;
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
