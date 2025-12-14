#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
long long int var_2 = 5767975809730143117LL;
signed char var_3 = (signed char)-33;
unsigned char var_4 = (unsigned char)148;
unsigned char var_5 = (unsigned char)101;
unsigned char var_6 = (unsigned char)200;
unsigned long long int var_7 = 8134137350094412522ULL;
unsigned long long int var_10 = 11073917081253211234ULL;
int zero = 0;
long long int var_12 = -7875082294319998636LL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 9764128698937218204ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
