#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4860056378511569401LL;
unsigned char var_6 = (unsigned char)113;
unsigned int var_9 = 2292325451U;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1803511944U;
unsigned long long int var_12 = 7970461680506339012ULL;
signed char var_13 = (signed char)30;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
