#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
unsigned int var_5 = 2259749652U;
signed char var_7 = (signed char)59;
_Bool var_10 = (_Bool)1;
long long int var_11 = -8429543317641158111LL;
unsigned short var_12 = (unsigned short)21418;
int zero = 0;
unsigned short var_20 = (unsigned short)24019;
unsigned int var_21 = 2385204994U;
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
