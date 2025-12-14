#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)9;
unsigned char var_3 = (unsigned char)2;
unsigned short var_4 = (unsigned short)60664;
short var_5 = (short)26490;
unsigned short var_7 = (unsigned short)41946;
unsigned short var_8 = (unsigned short)33327;
unsigned char var_11 = (unsigned char)219;
long long int var_12 = -991351075016038065LL;
int zero = 0;
short var_15 = (short)23386;
unsigned long long int var_16 = 15430231015329899163ULL;
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
