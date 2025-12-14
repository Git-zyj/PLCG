#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1688838018U;
unsigned char var_5 = (unsigned char)186;
int var_9 = -864871289;
int var_15 = -708679926;
int zero = 0;
unsigned short var_16 = (unsigned short)37611;
unsigned long long int var_17 = 10751233590321334886ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
