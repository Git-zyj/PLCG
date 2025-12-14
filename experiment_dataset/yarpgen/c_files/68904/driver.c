#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 466871368;
unsigned long long int var_1 = 11439150791483362834ULL;
int var_2 = -1222591566;
long long int var_8 = 6971465641349251591LL;
unsigned short var_11 = (unsigned short)17925;
unsigned int var_12 = 299393404U;
short var_17 = (short)8804;
int zero = 0;
signed char var_18 = (signed char)65;
unsigned int var_19 = 177129042U;
void init() {
}

void checksum() {
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
