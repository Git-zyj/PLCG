#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)18340;
int var_3 = -1955220722;
int var_4 = -1845780080;
unsigned long long int var_5 = 14808546843116901690ULL;
unsigned short var_6 = (unsigned short)22117;
unsigned long long int var_12 = 8805383017875995255ULL;
int var_13 = -1675591999;
int zero = 0;
unsigned long long int var_14 = 4521804249116545649ULL;
int var_15 = 438690873;
unsigned short var_16 = (unsigned short)54578;
int var_17 = -429528333;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
