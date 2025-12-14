#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)1;
signed char var_4 = (signed char)68;
unsigned long long int var_12 = 3751508266838050633ULL;
int var_14 = -681723328;
int zero = 0;
unsigned int var_19 = 593550952U;
unsigned char var_20 = (unsigned char)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
