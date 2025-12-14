#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38245;
unsigned char var_1 = (unsigned char)55;
int var_2 = -204751274;
int var_3 = -726685998;
unsigned int var_4 = 4038596400U;
unsigned int var_5 = 3673039992U;
int var_6 = -1919373279;
unsigned char var_7 = (unsigned char)24;
unsigned long long int var_9 = 14903039504778195321ULL;
unsigned short var_10 = (unsigned short)14218;
int zero = 0;
unsigned long long int var_12 = 16158508183916792336ULL;
unsigned short var_13 = (unsigned short)45614;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
