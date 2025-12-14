#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4248762009U;
unsigned short var_2 = (unsigned short)64696;
unsigned long long int var_4 = 11617292730105712260ULL;
signed char var_5 = (signed char)-92;
signed char var_8 = (signed char)-11;
long long int var_9 = -2154914975806826203LL;
signed char var_11 = (signed char)33;
int zero = 0;
signed char var_13 = (signed char)-99;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)39432;
unsigned long long int var_16 = 3152459242926644972ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
