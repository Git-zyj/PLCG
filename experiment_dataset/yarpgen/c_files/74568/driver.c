#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28415;
int var_3 = -1740223750;
unsigned short var_6 = (unsigned short)32025;
unsigned long long int var_11 = 4677986481856216487ULL;
unsigned long long int var_13 = 9520607781893821435ULL;
short var_15 = (short)-17195;
int zero = 0;
short var_19 = (short)24910;
int var_20 = 1582211388;
void init() {
}

void checksum() {
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
