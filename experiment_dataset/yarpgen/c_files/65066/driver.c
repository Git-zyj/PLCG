#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50315;
unsigned char var_2 = (unsigned char)46;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)52;
short var_11 = (short)-4494;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 17091883946558628358ULL;
long long int var_18 = 4708392062524325729LL;
unsigned short var_19 = (unsigned short)9692;
unsigned long long int var_20 = 9283632689856831358ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
