#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3196627380U;
unsigned long long int var_11 = 2247662233595454956ULL;
unsigned int var_13 = 4096021306U;
unsigned int var_14 = 2788597290U;
int zero = 0;
short var_17 = (short)22980;
unsigned long long int var_18 = 17131374802176153747ULL;
short var_19 = (short)-15562;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
