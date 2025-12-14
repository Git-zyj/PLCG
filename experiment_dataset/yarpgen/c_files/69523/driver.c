#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3647095748U;
int var_1 = -1702607751;
int var_2 = -867822924;
long long int var_3 = 5347724588300790945LL;
unsigned char var_6 = (unsigned char)167;
unsigned char var_10 = (unsigned char)173;
short var_14 = (short)-1373;
int zero = 0;
unsigned short var_15 = (unsigned short)19751;
unsigned char var_16 = (unsigned char)149;
void init() {
}

void checksum() {
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
