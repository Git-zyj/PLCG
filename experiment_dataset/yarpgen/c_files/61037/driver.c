#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21001;
unsigned char var_4 = (unsigned char)109;
unsigned short var_5 = (unsigned short)19739;
long long int var_6 = -1787460934066371026LL;
unsigned long long int var_9 = 18429433080957198704ULL;
long long int var_12 = -4776794991735773494LL;
unsigned char var_13 = (unsigned char)229;
unsigned int var_15 = 1465269170U;
int zero = 0;
signed char var_16 = (signed char)-112;
unsigned long long int var_17 = 2705231447147405718ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
