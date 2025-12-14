#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-78;
long long int var_4 = -5030522902769583746LL;
long long int var_8 = -6443312003601365596LL;
unsigned long long int var_11 = 12891416317072725739ULL;
unsigned char var_12 = (unsigned char)145;
int zero = 0;
unsigned char var_15 = (unsigned char)199;
unsigned short var_16 = (unsigned short)4836;
signed char var_17 = (signed char)-126;
signed char var_18 = (signed char)-60;
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
