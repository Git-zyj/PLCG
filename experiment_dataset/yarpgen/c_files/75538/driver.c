#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24954;
unsigned int var_1 = 2569134726U;
short var_6 = (short)-32261;
unsigned int var_9 = 68915311U;
unsigned long long int var_11 = 6481673012628069222ULL;
unsigned long long int var_13 = 2735258279846820966ULL;
unsigned char var_16 = (unsigned char)189;
unsigned short var_19 = (unsigned short)62554;
int zero = 0;
unsigned int var_20 = 1791585984U;
short var_21 = (short)-19048;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
