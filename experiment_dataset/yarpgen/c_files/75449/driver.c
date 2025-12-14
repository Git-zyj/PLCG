#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)128;
long long int var_3 = 272033734270229052LL;
short var_5 = (short)29652;
int var_8 = 1300850956;
unsigned long long int var_10 = 16870289860255288868ULL;
short var_12 = (short)-17787;
short var_13 = (short)32681;
int zero = 0;
int var_14 = 322983833;
unsigned char var_15 = (unsigned char)81;
long long int var_16 = 4308183794106842883LL;
void init() {
}

void checksum() {
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
