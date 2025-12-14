#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1398525557;
unsigned int var_1 = 1120697380U;
unsigned char var_3 = (unsigned char)117;
unsigned int var_9 = 826076542U;
unsigned int var_10 = 716154294U;
unsigned long long int var_13 = 193933243691848494ULL;
unsigned short var_14 = (unsigned short)61863;
int zero = 0;
unsigned short var_18 = (unsigned short)24820;
unsigned int var_19 = 1197924564U;
long long int var_20 = 8418833997505134979LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
