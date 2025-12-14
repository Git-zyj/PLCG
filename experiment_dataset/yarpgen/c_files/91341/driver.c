#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1840398771U;
unsigned long long int var_4 = 17422693026685716551ULL;
long long int var_5 = -8149935361440578334LL;
unsigned int var_8 = 4056998320U;
signed char var_9 = (signed char)38;
unsigned int var_10 = 316013357U;
int zero = 0;
unsigned int var_13 = 3457035949U;
long long int var_14 = -3709475735187960930LL;
unsigned int var_15 = 3213210392U;
long long int var_16 = -546523443392495479LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
