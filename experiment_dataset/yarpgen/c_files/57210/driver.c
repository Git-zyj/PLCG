#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 4985392089306256559ULL;
unsigned int var_5 = 1552765330U;
unsigned short var_11 = (unsigned short)41363;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_16 = (short)32392;
unsigned char var_17 = (unsigned char)18;
unsigned long long int var_18 = 3921827426845399744ULL;
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
