#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 915036110U;
signed char var_2 = (signed char)124;
unsigned int var_3 = 239289392U;
int var_4 = -738717977;
signed char var_6 = (signed char)-66;
_Bool var_11 = (_Bool)0;
long long int var_12 = -7582765611651268264LL;
unsigned long long int var_13 = 11431507659758612262ULL;
unsigned long long int var_14 = 15716505564688294187ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)14;
unsigned short var_16 = (unsigned short)14580;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
