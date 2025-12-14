#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -8665999998223621266LL;
signed char var_8 = (signed char)125;
unsigned long long int var_10 = 9767683792094318393ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -6202941808797347909LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
