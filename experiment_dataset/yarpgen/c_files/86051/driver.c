#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
signed char var_4 = (signed char)-50;
long long int var_8 = -1779661441324862147LL;
signed char var_13 = (signed char)-75;
signed char var_15 = (signed char)-112;
int zero = 0;
long long int var_16 = -652032583149848113LL;
long long int var_17 = -7734765665326485217LL;
void init() {
}

void checksum() {
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
