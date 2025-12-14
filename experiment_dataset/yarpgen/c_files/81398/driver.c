#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)53;
_Bool var_4 = (_Bool)1;
int var_5 = 648778392;
int var_13 = 730579123;
unsigned short var_16 = (unsigned short)30060;
int zero = 0;
unsigned long long int var_18 = 14019248493112043936ULL;
_Bool var_19 = (_Bool)0;
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
