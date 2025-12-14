#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)87;
unsigned int var_9 = 1252542116U;
_Bool var_11 = (_Bool)1;
long long int var_12 = -1636398343852835202LL;
int zero = 0;
signed char var_16 = (signed char)-64;
unsigned short var_17 = (unsigned short)57100;
void init() {
}

void checksum() {
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
