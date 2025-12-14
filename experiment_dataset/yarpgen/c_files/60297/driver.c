#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -540504401;
_Bool var_1 = (_Bool)0;
int var_5 = 1841033464;
signed char var_6 = (signed char)112;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 10377887842281167244ULL;
unsigned int var_16 = 4242845964U;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)107;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
