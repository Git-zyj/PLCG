#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 574293406;
unsigned int var_6 = 3704442380U;
unsigned long long int var_8 = 10725176563095157630ULL;
long long int var_10 = 5104618979781997323LL;
long long int var_11 = 5859986122291156040LL;
int zero = 0;
unsigned int var_13 = 172397623U;
unsigned int var_14 = 1415427294U;
unsigned int var_15 = 2769545887U;
signed char var_16 = (signed char)-83;
signed char var_17 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
