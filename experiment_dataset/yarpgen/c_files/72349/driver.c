#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22968;
unsigned long long int var_5 = 4693827780606676374ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 16770011167679741538ULL;
unsigned short var_10 = (unsigned short)37291;
unsigned long long int var_11 = 17173698930555257610ULL;
int zero = 0;
unsigned int var_14 = 3226798892U;
int var_15 = -1924820574;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)36;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
