#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4321166586698151947ULL;
int var_6 = 787251842;
unsigned int var_7 = 2664277439U;
int var_10 = 2058495814;
short var_13 = (short)-17331;
int zero = 0;
unsigned char var_20 = (unsigned char)120;
unsigned short var_21 = (unsigned short)21723;
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
