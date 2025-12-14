#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)22332;
unsigned long long int var_6 = 12260797777464503729ULL;
unsigned short var_9 = (unsigned short)6230;
int zero = 0;
unsigned int var_10 = 3906235371U;
long long int var_11 = 44995881748870645LL;
unsigned short var_12 = (unsigned short)52196;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
