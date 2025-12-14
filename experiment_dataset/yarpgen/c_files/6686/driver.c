#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 116896662;
int var_5 = 1963275431;
unsigned char var_7 = (unsigned char)155;
short var_8 = (short)-32317;
int var_10 = -178249804;
short var_11 = (short)-10400;
int var_13 = -148726668;
unsigned short var_14 = (unsigned short)44803;
int zero = 0;
unsigned char var_18 = (unsigned char)18;
unsigned char var_19 = (unsigned char)202;
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
