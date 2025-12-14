#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 441109378;
unsigned char var_1 = (unsigned char)168;
_Bool var_4 = (_Bool)0;
long long int var_5 = -219412772284504606LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 4384241090370999087ULL;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)8;
unsigned long long int var_12 = 7517871229486393088ULL;
signed char var_13 = (signed char)124;
unsigned long long int var_15 = 189313978615247612ULL;
int zero = 0;
long long int var_16 = -8223003781004981117LL;
short var_17 = (short)-30993;
short var_18 = (short)24878;
short var_19 = (short)18136;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
