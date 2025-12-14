#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13489786220509850686ULL;
unsigned long long int var_4 = 14271662400186177741ULL;
int var_5 = -807210001;
unsigned int var_8 = 77914746U;
int zero = 0;
signed char var_10 = (signed char)25;
unsigned short var_11 = (unsigned short)46416;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
