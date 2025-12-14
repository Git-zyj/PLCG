#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7637678885989308505LL;
long long int var_4 = -6495416105206739350LL;
unsigned long long int var_6 = 232798029605922223ULL;
short var_7 = (short)23276;
short var_8 = (short)6171;
short var_10 = (short)7166;
signed char var_12 = (signed char)-110;
int zero = 0;
short var_20 = (short)-9250;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
