#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 1474924371293256116ULL;
int var_3 = 2127176125;
signed char var_4 = (signed char)114;
int var_6 = 1636990976;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = -6945997301548693910LL;
signed char var_11 = (signed char)-73;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
