#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)46;
unsigned int var_4 = 2057329790U;
signed char var_13 = (signed char)-94;
unsigned long long int var_15 = 16494183011083316596ULL;
int zero = 0;
unsigned long long int var_17 = 8470080442100042077ULL;
short var_18 = (short)17814;
unsigned long long int var_19 = 13492349717164314223ULL;
unsigned short var_20 = (unsigned short)48634;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
