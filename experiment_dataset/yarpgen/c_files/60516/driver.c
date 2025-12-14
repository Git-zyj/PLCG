#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7334;
int var_3 = 1930004596;
_Bool var_4 = (_Bool)0;
int var_6 = -1774136785;
long long int var_8 = -1723967187022917029LL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 4257726605U;
unsigned short var_13 = (unsigned short)46818;
int zero = 0;
unsigned int var_15 = 3804670108U;
long long int var_16 = 1781329996176851567LL;
unsigned short var_17 = (unsigned short)20202;
long long int var_18 = -5466762025523262108LL;
short var_19 = (short)-16271;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
