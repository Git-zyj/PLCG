#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4021699361U;
signed char var_12 = (signed char)40;
signed char var_13 = (signed char)-34;
unsigned int var_15 = 2002950735U;
int zero = 0;
signed char var_17 = (signed char)3;
unsigned int var_18 = 1171560053U;
signed char var_19 = (signed char)-17;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
