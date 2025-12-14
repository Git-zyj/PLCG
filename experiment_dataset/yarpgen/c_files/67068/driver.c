#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)45414;
unsigned short var_6 = (unsigned short)6800;
int var_7 = 1294468884;
unsigned char var_8 = (unsigned char)86;
short var_9 = (short)-5466;
unsigned char var_10 = (unsigned char)230;
short var_11 = (short)8348;
unsigned short var_15 = (unsigned short)15492;
int zero = 0;
signed char var_16 = (signed char)-117;
short var_17 = (short)610;
unsigned long long int var_18 = 7252982981293756472ULL;
void init() {
}

void checksum() {
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
