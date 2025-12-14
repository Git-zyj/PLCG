#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1299397895388962933LL;
long long int var_5 = -5361831059544982223LL;
unsigned char var_6 = (unsigned char)125;
unsigned long long int var_7 = 13213103523282302753ULL;
short var_8 = (short)21830;
unsigned int var_10 = 3352742025U;
short var_11 = (short)19833;
unsigned long long int var_14 = 12778236989483744952ULL;
unsigned short var_15 = (unsigned short)58640;
short var_16 = (short)19920;
int zero = 0;
unsigned char var_17 = (unsigned char)255;
long long int var_18 = -6867235833878391518LL;
unsigned long long int var_19 = 10348886594892250257ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
