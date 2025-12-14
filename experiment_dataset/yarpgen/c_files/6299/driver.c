#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1183827597U;
long long int var_6 = -5329603413550882851LL;
unsigned char var_13 = (unsigned char)75;
int zero = 0;
unsigned long long int var_15 = 457418743595352950ULL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)162;
short var_18 = (short)-13329;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
