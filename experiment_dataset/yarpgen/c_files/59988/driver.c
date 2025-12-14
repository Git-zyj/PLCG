#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2326105162U;
signed char var_1 = (signed char)9;
short var_2 = (short)27695;
short var_3 = (short)11362;
int zero = 0;
signed char var_14 = (signed char)-90;
int var_15 = -1149078796;
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
