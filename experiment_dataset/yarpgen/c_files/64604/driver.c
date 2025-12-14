#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)11041;
signed char var_6 = (signed char)-13;
short var_9 = (short)-8167;
int zero = 0;
long long int var_17 = 3229380184225464830LL;
short var_18 = (short)15735;
long long int var_19 = -5023376727580919874LL;
unsigned int var_20 = 1873029015U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
