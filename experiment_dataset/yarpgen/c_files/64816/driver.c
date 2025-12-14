#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4763600231211176741LL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)9559;
unsigned int var_10 = 3020946788U;
unsigned short var_15 = (unsigned short)63906;
int zero = 0;
signed char var_17 = (signed char)-32;
unsigned short var_18 = (unsigned short)57113;
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
