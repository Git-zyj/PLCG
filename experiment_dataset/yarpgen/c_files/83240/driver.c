#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8042265783654899067LL;
short var_14 = (short)-14819;
unsigned int var_15 = 3315771697U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 2663498391U;
unsigned char var_19 = (unsigned char)66;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
