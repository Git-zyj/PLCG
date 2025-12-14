#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9639;
unsigned char var_4 = (unsigned char)158;
unsigned long long int var_5 = 918003535692197517ULL;
unsigned short var_6 = (unsigned short)62284;
unsigned short var_7 = (unsigned short)7351;
int var_9 = -2090113256;
int zero = 0;
int var_13 = -1313021670;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 176424092U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
