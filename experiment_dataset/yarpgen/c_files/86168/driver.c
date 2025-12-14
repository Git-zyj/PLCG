#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)148;
int var_6 = 332036599;
int var_8 = -1630775541;
long long int var_12 = 8973840761816315468LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2225086252U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
