#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)84;
unsigned long long int var_3 = 14302694291331809179ULL;
unsigned short var_5 = (unsigned short)2962;
unsigned long long int var_6 = 13282344269904476605ULL;
long long int var_8 = -6100923969352341620LL;
short var_9 = (short)31049;
unsigned int var_10 = 114904710U;
unsigned int var_11 = 2118009661U;
unsigned char var_12 = (unsigned char)178;
unsigned char var_14 = (unsigned char)169;
unsigned int var_16 = 338857554U;
unsigned short var_19 = (unsigned short)47153;
int zero = 0;
unsigned int var_20 = 3761964698U;
unsigned char var_21 = (unsigned char)84;
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
