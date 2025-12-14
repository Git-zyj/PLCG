#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)211;
signed char var_1 = (signed char)78;
int var_2 = 1235072084;
unsigned int var_4 = 1082045605U;
unsigned short var_5 = (unsigned short)1226;
unsigned short var_6 = (unsigned short)60161;
unsigned char var_7 = (unsigned char)156;
long long int var_8 = 2402101917277883798LL;
short var_9 = (short)-31182;
unsigned short var_10 = (unsigned short)31973;
unsigned short var_12 = (unsigned short)6582;
signed char var_14 = (signed char)-66;
unsigned long long int var_16 = 2132892132730043108ULL;
short var_17 = (short)-32619;
int zero = 0;
short var_18 = (short)7540;
unsigned int var_19 = 17240966U;
signed char var_20 = (signed char)-14;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
