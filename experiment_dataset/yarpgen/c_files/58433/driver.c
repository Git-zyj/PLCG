#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)173;
signed char var_7 = (signed char)30;
unsigned long long int var_10 = 379655949185822775ULL;
unsigned long long int var_13 = 5140350737247514200ULL;
unsigned long long int var_14 = 7687013254753437289ULL;
int zero = 0;
signed char var_15 = (signed char)68;
short var_16 = (short)29303;
unsigned long long int var_17 = 7304453599239796943ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
