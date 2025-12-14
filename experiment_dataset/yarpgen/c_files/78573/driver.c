#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5480144499103003731LL;
long long int var_6 = -9140319447396458571LL;
unsigned short var_8 = (unsigned short)1473;
unsigned int var_10 = 1835234851U;
_Bool var_14 = (_Bool)1;
unsigned char var_16 = (unsigned char)100;
int zero = 0;
unsigned int var_17 = 2078645814U;
unsigned int var_18 = 551173492U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
