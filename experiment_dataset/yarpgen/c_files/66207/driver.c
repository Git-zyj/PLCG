#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-74;
unsigned int var_4 = 3047273131U;
int var_14 = -161948447;
int zero = 0;
signed char var_18 = (signed char)-40;
signed char var_19 = (signed char)24;
int var_20 = -1412979305;
unsigned int var_21 = 2912395803U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
