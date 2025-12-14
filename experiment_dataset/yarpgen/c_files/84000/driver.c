#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 217203537U;
unsigned long long int var_3 = 8183384107363441342ULL;
unsigned long long int var_7 = 11570438001100669090ULL;
unsigned short var_8 = (unsigned short)40250;
unsigned int var_10 = 2799746414U;
unsigned int var_11 = 1349200839U;
int zero = 0;
unsigned long long int var_12 = 8361955564827186879ULL;
unsigned int var_13 = 1509134317U;
unsigned short var_14 = (unsigned short)54174;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
