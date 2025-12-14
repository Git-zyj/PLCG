#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3008868806U;
unsigned long long int var_5 = 7335755475580177730ULL;
int var_8 = 162661401;
unsigned long long int var_10 = 17094508511279459809ULL;
unsigned long long int var_13 = 13687044252535269852ULL;
int zero = 0;
signed char var_15 = (signed char)-22;
unsigned long long int var_16 = 2101103894619436762ULL;
unsigned long long int var_17 = 10731887572004622743ULL;
int var_18 = 1508565574;
unsigned char var_19 = (unsigned char)194;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
