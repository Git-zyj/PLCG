#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1763251812598250881LL;
unsigned int var_2 = 2832284310U;
unsigned char var_4 = (unsigned char)107;
int var_5 = 1788599298;
int var_7 = 1892010673;
unsigned long long int var_8 = 15372046785343418927ULL;
int var_9 = -886379717;
int zero = 0;
unsigned long long int var_13 = 7003617556627328614ULL;
signed char var_14 = (signed char)-34;
int var_15 = 1944381960;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
