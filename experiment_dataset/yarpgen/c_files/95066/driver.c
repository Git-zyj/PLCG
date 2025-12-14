#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -1870981560077118012LL;
_Bool var_9 = (_Bool)1;
unsigned int var_13 = 1061895367U;
int zero = 0;
short var_17 = (short)12214;
unsigned int var_18 = 1003551328U;
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
