#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26262;
int var_2 = 3986275;
_Bool var_3 = (_Bool)1;
int var_5 = -1919311943;
int var_6 = 121403970;
long long int var_7 = 8821636886947892857LL;
long long int var_10 = -3796509346891513693LL;
int zero = 0;
unsigned short var_13 = (unsigned short)49310;
long long int var_14 = -8077794531216062215LL;
long long int var_15 = 362519827220676819LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
