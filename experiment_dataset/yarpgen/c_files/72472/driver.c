#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 205327602U;
long long int var_3 = 651949250570591409LL;
unsigned int var_5 = 1251284893U;
unsigned int var_8 = 2954843121U;
unsigned int var_9 = 1642059673U;
unsigned int var_11 = 4031819245U;
unsigned int var_15 = 2432959035U;
unsigned int var_18 = 2570909052U;
int zero = 0;
unsigned int var_19 = 786559039U;
unsigned int var_20 = 2292794646U;
long long int var_21 = 4406950702335549010LL;
unsigned int var_22 = 2730374867U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
