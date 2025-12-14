#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -682644609817263403LL;
unsigned int var_5 = 2713741531U;
_Bool var_6 = (_Bool)0;
int zero = 0;
int var_15 = 2005720664;
long long int var_16 = -5944478524793190157LL;
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
