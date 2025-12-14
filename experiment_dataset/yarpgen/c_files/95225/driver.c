#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1905659278U;
unsigned char var_2 = (unsigned char)162;
signed char var_4 = (signed char)-37;
signed char var_6 = (signed char)-7;
short var_7 = (short)-1214;
long long int var_11 = -5391462987777704852LL;
unsigned long long int var_12 = 6141077945773553116ULL;
long long int var_14 = -3418625607172038575LL;
int zero = 0;
unsigned int var_15 = 2382015245U;
int var_16 = 1123410481;
signed char var_17 = (signed char)-24;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
