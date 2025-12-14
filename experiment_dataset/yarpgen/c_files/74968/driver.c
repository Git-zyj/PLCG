#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)24;
unsigned int var_3 = 3603056420U;
unsigned char var_4 = (unsigned char)2;
unsigned int var_6 = 3263711509U;
unsigned int var_7 = 2545868729U;
short var_8 = (short)-21994;
int zero = 0;
unsigned char var_13 = (unsigned char)109;
unsigned long long int var_14 = 15868352251779188006ULL;
long long int var_15 = -592117362557609000LL;
unsigned short var_16 = (unsigned short)32926;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
