#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)8406;
short var_4 = (short)-10055;
short var_5 = (short)16031;
short var_6 = (short)-7386;
unsigned char var_7 = (unsigned char)229;
int var_8 = -1706931112;
int var_9 = -1672749989;
int var_11 = 974073525;
unsigned char var_12 = (unsigned char)178;
int zero = 0;
short var_13 = (short)18949;
short var_14 = (short)1173;
short var_15 = (short)9989;
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
