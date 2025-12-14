#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)61;
signed char var_2 = (signed char)-48;
unsigned int var_3 = 4109011741U;
signed char var_15 = (signed char)-18;
int zero = 0;
signed char var_17 = (signed char)5;
signed char var_18 = (signed char)80;
void init() {
}

void checksum() {
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
