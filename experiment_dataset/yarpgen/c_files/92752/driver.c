#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1848916638U;
unsigned char var_1 = (unsigned char)218;
unsigned char var_2 = (unsigned char)165;
signed char var_3 = (signed char)115;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)26270;
long long int var_13 = -2316372412551130304LL;
unsigned short var_14 = (unsigned short)48288;
unsigned short var_17 = (unsigned short)39696;
int zero = 0;
signed char var_19 = (signed char)46;
long long int var_20 = -5777904406414920056LL;
void init() {
}

void checksum() {
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
