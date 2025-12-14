#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)18738;
int var_3 = 1237770084;
short var_4 = (short)19114;
unsigned long long int var_6 = 43420514769207996ULL;
unsigned short var_7 = (unsigned short)56280;
int zero = 0;
int var_13 = -353101984;
unsigned char var_14 = (unsigned char)130;
int var_15 = 2003455792;
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
