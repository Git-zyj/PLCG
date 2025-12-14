#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12711473026627501382ULL;
long long int var_1 = 7377940591678964563LL;
int var_2 = -859482328;
short var_3 = (short)-203;
int var_4 = 845970153;
short var_5 = (short)-10795;
int var_7 = 2042267178;
int var_10 = -1008508558;
int zero = 0;
unsigned short var_12 = (unsigned short)26649;
unsigned long long int var_13 = 14430121094256886338ULL;
unsigned short var_14 = (unsigned short)26187;
unsigned short var_15 = (unsigned short)13710;
unsigned long long int var_16 = 17658835665509552855ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
