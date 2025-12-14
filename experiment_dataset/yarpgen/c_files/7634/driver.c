#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3631322642260367770ULL;
int var_2 = 922085495;
unsigned short var_10 = (unsigned short)38275;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)-20;
unsigned short var_16 = (unsigned short)30872;
int zero = 0;
unsigned int var_17 = 2649925452U;
signed char var_18 = (signed char)-6;
void init() {
}

void checksum() {
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
