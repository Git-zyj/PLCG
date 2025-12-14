#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2433154639U;
int var_2 = -754511283;
signed char var_12 = (signed char)-51;
unsigned int var_13 = 2655430151U;
int var_15 = -158348086;
int zero = 0;
unsigned int var_16 = 1540914317U;
long long int var_17 = -51481957876632598LL;
short var_18 = (short)-6415;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
