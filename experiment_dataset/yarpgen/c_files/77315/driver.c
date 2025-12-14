#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1487538550;
int var_2 = -2061101564;
signed char var_6 = (signed char)-36;
_Bool var_8 = (_Bool)1;
signed char var_12 = (signed char)-12;
int zero = 0;
unsigned int var_14 = 2341358356U;
long long int var_15 = -3261771984125818052LL;
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
