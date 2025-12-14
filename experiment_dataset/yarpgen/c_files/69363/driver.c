#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)17851;
unsigned char var_7 = (unsigned char)70;
unsigned short var_8 = (unsigned short)29232;
unsigned char var_10 = (unsigned char)224;
unsigned long long int var_11 = 10733896009393232946ULL;
long long int var_13 = 6456688861469324409LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 14466255204197565018ULL;
short var_20 = (short)-12688;
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
