#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-68;
unsigned short var_6 = (unsigned short)5558;
unsigned char var_9 = (unsigned char)254;
unsigned int var_10 = 1239423275U;
short var_13 = (short)-22557;
signed char var_15 = (signed char)93;
int zero = 0;
unsigned short var_16 = (unsigned short)58482;
unsigned char var_17 = (unsigned char)25;
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
