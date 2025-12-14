#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_14 = 16176208452501785551ULL;
int zero = 0;
unsigned long long int var_16 = 8377995429141548605ULL;
unsigned long long int var_17 = 8337313544132595547ULL;
unsigned long long int var_18 = 6740126764713680453ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
