#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)120;
signed char var_5 = (signed char)14;
unsigned long long int var_10 = 14828717244929045530ULL;
int zero = 0;
short var_15 = (short)-19922;
short var_16 = (short)-27044;
signed char var_17 = (signed char)42;
signed char var_18 = (signed char)25;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
