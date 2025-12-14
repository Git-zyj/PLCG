#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1358456673U;
unsigned long long int var_12 = 4173400189481520788ULL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)9449;
unsigned int var_17 = 3156931770U;
int zero = 0;
unsigned short var_18 = (unsigned short)57312;
unsigned long long int var_19 = 12592197600173096939ULL;
void init() {
}

void checksum() {
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
