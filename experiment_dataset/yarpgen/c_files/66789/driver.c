#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)50;
unsigned int var_2 = 1945460015U;
unsigned int var_4 = 1859581061U;
int var_5 = -255489535;
long long int var_10 = -4467544914787746445LL;
int zero = 0;
unsigned int var_15 = 574892573U;
int var_16 = 1023158910;
int var_17 = -686658667;
unsigned short var_18 = (unsigned short)48725;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
