#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15978623312803372705ULL;
long long int var_5 = -943608766612382791LL;
unsigned short var_6 = (unsigned short)28272;
unsigned long long int var_8 = 7266160956986830902ULL;
int var_9 = 2139045992;
unsigned short var_10 = (unsigned short)50379;
signed char var_12 = (signed char)23;
int var_13 = -1718061199;
int zero = 0;
unsigned int var_14 = 95233130U;
long long int var_15 = 2314076593768225529LL;
long long int var_16 = 2939474967711306502LL;
unsigned long long int var_17 = 17589418988302720150ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
