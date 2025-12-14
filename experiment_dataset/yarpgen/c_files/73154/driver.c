#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)188;
unsigned short var_3 = (unsigned short)26388;
unsigned short var_4 = (unsigned short)53610;
long long int var_5 = 4628167973541293066LL;
long long int var_8 = -1697655714572637097LL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)22284;
unsigned int var_12 = 1372390090U;
unsigned short var_13 = (unsigned short)11997;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)19448;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
