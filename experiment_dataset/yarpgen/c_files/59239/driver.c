#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26450;
short var_3 = (short)-20364;
short var_4 = (short)-19374;
short var_5 = (short)12301;
short var_8 = (short)-22586;
unsigned char var_12 = (unsigned char)201;
short var_13 = (short)-23308;
short var_15 = (short)-30985;
int zero = 0;
unsigned char var_18 = (unsigned char)73;
short var_19 = (short)-447;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
