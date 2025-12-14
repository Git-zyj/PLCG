#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)164;
unsigned char var_4 = (unsigned char)122;
unsigned int var_6 = 122618443U;
_Bool var_8 = (_Bool)0;
long long int var_9 = 2930598704788989570LL;
short var_10 = (short)21116;
long long int var_11 = 5254213043132228198LL;
unsigned int var_15 = 3125965192U;
unsigned int var_16 = 1599201101U;
long long int var_17 = 7681397390877816725LL;
int zero = 0;
unsigned long long int var_18 = 17959146896704921317ULL;
unsigned int var_19 = 470923941U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
