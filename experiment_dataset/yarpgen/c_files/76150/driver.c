#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6173940221915755366ULL;
unsigned short var_2 = (unsigned short)20640;
long long int var_5 = 7438102053057221768LL;
short var_6 = (short)2767;
_Bool var_7 = (_Bool)1;
int var_10 = -943816885;
signed char var_13 = (signed char)-47;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)16;
long long int var_21 = 7995114982965787325LL;
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
