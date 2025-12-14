#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 532226391;
int var_5 = 1135038971;
signed char var_6 = (signed char)56;
short var_10 = (short)3003;
signed char var_11 = (signed char)-17;
short var_12 = (short)-18981;
unsigned long long int var_13 = 14126170240455120690ULL;
signed char var_14 = (signed char)-64;
int zero = 0;
long long int var_15 = -1641749577904477146LL;
unsigned int var_16 = 437006531U;
int var_17 = -1752448381;
void init() {
}

void checksum() {
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
