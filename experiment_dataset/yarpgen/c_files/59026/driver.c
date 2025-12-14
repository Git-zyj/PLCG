#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2174701757150204072LL;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
signed char var_9 = (signed char)-32;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-4116;
unsigned int var_13 = 759562582U;
void init() {
}

void checksum() {
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
