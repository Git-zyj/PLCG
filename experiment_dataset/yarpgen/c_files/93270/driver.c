#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-84;
unsigned int var_10 = 3045322577U;
unsigned int var_13 = 164567094U;
int zero = 0;
signed char var_16 = (signed char)-108;
unsigned int var_17 = 987620132U;
signed char var_18 = (signed char)-60;
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
