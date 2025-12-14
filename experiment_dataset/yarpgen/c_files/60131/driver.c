#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24845;
long long int var_2 = -3051136171602737500LL;
int var_3 = 1613869524;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)62761;
unsigned int var_8 = 4281806479U;
unsigned int var_11 = 2526974158U;
unsigned short var_12 = (unsigned short)36374;
long long int var_13 = 7572164559010164112LL;
int zero = 0;
unsigned short var_16 = (unsigned short)49805;
_Bool var_17 = (_Bool)1;
short var_18 = (short)5006;
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
