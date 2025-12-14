#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)118;
signed char var_10 = (signed char)79;
signed char var_11 = (signed char)57;
unsigned long long int var_13 = 4820214957835940540ULL;
int zero = 0;
signed char var_14 = (signed char)100;
short var_15 = (short)9819;
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
