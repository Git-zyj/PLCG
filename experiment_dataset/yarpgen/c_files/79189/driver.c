#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8248;
int var_2 = 379918028;
short var_4 = (short)-11921;
unsigned short var_10 = (unsigned short)9342;
int zero = 0;
unsigned long long int var_11 = 427311375369196059ULL;
short var_12 = (short)-27651;
unsigned short var_13 = (unsigned short)39932;
unsigned int var_14 = 4058956773U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
