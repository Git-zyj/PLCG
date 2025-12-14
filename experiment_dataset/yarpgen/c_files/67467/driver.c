#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3567247014U;
unsigned short var_1 = (unsigned short)29454;
unsigned long long int var_5 = 6342451984044303401ULL;
short var_7 = (short)-17405;
unsigned short var_8 = (unsigned short)28250;
unsigned short var_9 = (unsigned short)30900;
unsigned long long int var_10 = 6260365966753433147ULL;
unsigned short var_11 = (unsigned short)17833;
unsigned short var_12 = (unsigned short)11400;
unsigned long long int var_13 = 10340420838811563241ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)5641;
unsigned short var_17 = (unsigned short)51345;
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
