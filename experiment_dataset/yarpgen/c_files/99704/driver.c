#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 16349798708380460081ULL;
signed char var_9 = (signed char)70;
long long int var_10 = 2068290272041749189LL;
signed char var_11 = (signed char)-64;
signed char var_13 = (signed char)112;
int zero = 0;
unsigned short var_14 = (unsigned short)7601;
unsigned long long int var_15 = 7677326930623344853ULL;
long long int var_16 = 1243070832818888863LL;
unsigned long long int var_17 = 8792586555275602954ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
