#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5940;
unsigned long long int var_2 = 5685541525143684554ULL;
short var_4 = (short)-25610;
unsigned long long int var_5 = 6092189959572589413ULL;
short var_8 = (short)5401;
signed char var_10 = (signed char)18;
int zero = 0;
signed char var_12 = (signed char)59;
short var_13 = (short)26208;
short var_14 = (short)-12787;
int var_15 = -1069424775;
short var_16 = (short)-17195;
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
