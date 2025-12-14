#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)56;
unsigned long long int var_1 = 18256818716652946186ULL;
unsigned long long int var_4 = 14027781421189006735ULL;
int var_6 = 1549489700;
unsigned long long int var_7 = 11803003138338278466ULL;
unsigned char var_8 = (unsigned char)217;
int var_13 = -1880045137;
unsigned int var_14 = 2377859633U;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)23;
_Bool var_17 = (_Bool)0;
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
