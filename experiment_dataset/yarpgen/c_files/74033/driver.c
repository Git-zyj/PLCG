#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)23;
_Bool var_9 = (_Bool)1;
unsigned long long int var_14 = 4558329006304516405ULL;
int zero = 0;
long long int var_16 = -7278548447794933905LL;
signed char var_17 = (signed char)-113;
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
