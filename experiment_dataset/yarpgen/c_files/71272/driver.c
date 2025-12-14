#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12294790863988018929ULL;
_Bool var_1 = (_Bool)0;
unsigned int var_9 = 1664384592U;
int zero = 0;
unsigned short var_10 = (unsigned short)20119;
unsigned short var_11 = (unsigned short)35522;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
