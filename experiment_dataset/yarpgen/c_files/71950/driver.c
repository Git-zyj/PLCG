#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13380;
long long int var_2 = -7608515080490831240LL;
unsigned long long int var_4 = 1624431232606230691ULL;
unsigned long long int var_5 = 5023998055114535813ULL;
short var_6 = (short)-4167;
short var_7 = (short)27695;
long long int var_8 = -3857326188117584067LL;
int zero = 0;
long long int var_10 = -1518497855789936671LL;
unsigned char var_11 = (unsigned char)44;
int var_12 = 544140207;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
