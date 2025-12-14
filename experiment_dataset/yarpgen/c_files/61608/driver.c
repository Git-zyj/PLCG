#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1588013595;
signed char var_7 = (signed char)-62;
unsigned long long int var_14 = 6074464898559055895ULL;
int zero = 0;
short var_16 = (short)-2803;
signed char var_17 = (signed char)-17;
unsigned long long int var_18 = 13772575703412739969ULL;
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
