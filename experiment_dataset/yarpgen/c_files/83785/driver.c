#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3105556695U;
_Bool var_6 = (_Bool)1;
_Bool var_13 = (_Bool)0;
long long int var_14 = -5232414998650495887LL;
long long int var_16 = -3884302917602199840LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 2609404662U;
signed char var_19 = (signed char)124;
signed char var_20 = (signed char)-24;
void init() {
}

void checksum() {
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
