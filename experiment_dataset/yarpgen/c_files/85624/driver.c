#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)61;
unsigned short var_10 = (unsigned short)38360;
int zero = 0;
signed char var_15 = (signed char)15;
unsigned int var_16 = 1873576930U;
signed char var_17 = (signed char)5;
unsigned long long int var_18 = 6461200251500241305ULL;
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
