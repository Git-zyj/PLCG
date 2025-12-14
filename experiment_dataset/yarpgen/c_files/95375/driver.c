#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-113;
signed char var_6 = (signed char)24;
signed char var_7 = (signed char)-126;
signed char var_8 = (signed char)25;
int zero = 0;
signed char var_10 = (signed char)38;
signed char var_11 = (signed char)-112;
signed char var_12 = (signed char)-68;
signed char var_13 = (signed char)-13;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
