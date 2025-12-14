#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)24143;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 9276919739580751984ULL;
int zero = 0;
unsigned long long int var_15 = 17854276591633809841ULL;
int var_16 = -12752892;
void init() {
}

void checksum() {
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
