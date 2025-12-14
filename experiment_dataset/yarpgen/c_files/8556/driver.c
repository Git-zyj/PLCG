#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1431508351U;
int var_8 = 2145869058;
signed char var_9 = (signed char)-120;
int zero = 0;
signed char var_12 = (signed char)-18;
unsigned int var_13 = 1566201343U;
int var_14 = -1032423381;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
