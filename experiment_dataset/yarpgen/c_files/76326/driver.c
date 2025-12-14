#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2157318826U;
unsigned short var_10 = (unsigned short)51175;
unsigned int var_11 = 3016490395U;
signed char var_14 = (signed char)-50;
int zero = 0;
signed char var_17 = (signed char)-122;
int var_18 = -1109709181;
unsigned long long int var_19 = 12470676799882042592ULL;
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
