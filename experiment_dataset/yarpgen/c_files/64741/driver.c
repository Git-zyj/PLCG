#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2384295979U;
long long int var_3 = 4000310577677107975LL;
long long int var_4 = 3751526816408625373LL;
unsigned int var_6 = 2942097262U;
short var_7 = (short)-7667;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 3718319329U;
unsigned short var_12 = (unsigned short)9700;
int zero = 0;
unsigned int var_13 = 544611469U;
unsigned short var_14 = (unsigned short)22146;
unsigned long long int var_15 = 8670036123600516129ULL;
unsigned long long int var_16 = 5962415359009947626ULL;
long long int var_17 = -1548468116773030704LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
