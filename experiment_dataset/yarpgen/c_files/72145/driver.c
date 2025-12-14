#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11388657632859648113ULL;
short var_2 = (short)-7393;
short var_9 = (short)-30717;
short var_14 = (short)15488;
int zero = 0;
unsigned int var_20 = 2796966968U;
_Bool var_21 = (_Bool)1;
long long int var_22 = -8293285353821652775LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
