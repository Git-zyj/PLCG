#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1681058898;
unsigned int var_2 = 144285780U;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)49940;
long long int var_9 = 1175396458011569445LL;
int zero = 0;
unsigned int var_14 = 2593398302U;
signed char var_15 = (signed char)97;
unsigned long long int var_16 = 9461337936964383825ULL;
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
