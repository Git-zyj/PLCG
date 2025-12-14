#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)35436;
int var_6 = -88545889;
unsigned long long int var_9 = 15812011639643820656ULL;
int zero = 0;
short var_10 = (short)13299;
unsigned long long int var_11 = 9662534638702910586ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
