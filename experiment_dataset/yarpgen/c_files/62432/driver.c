#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62501;
unsigned short var_10 = (unsigned short)12408;
unsigned long long int var_11 = 5165167718996507834ULL;
unsigned short var_12 = (unsigned short)12074;
int var_13 = -732784629;
int zero = 0;
unsigned short var_18 = (unsigned short)15733;
long long int var_19 = 870351714829061032LL;
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
