#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44094;
signed char var_1 = (signed char)-38;
unsigned short var_4 = (unsigned short)20972;
short var_5 = (short)520;
unsigned int var_8 = 2646418600U;
signed char var_9 = (signed char)-71;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)73;
unsigned int var_12 = 3792959411U;
unsigned int var_13 = 3487277279U;
int zero = 0;
int var_14 = 1231272733;
long long int var_15 = 8435780860972500085LL;
short var_16 = (short)10616;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 14427172882696986471ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
