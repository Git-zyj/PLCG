#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11864964137802809266ULL;
long long int var_4 = -1720323274018638660LL;
_Bool var_6 = (_Bool)1;
long long int var_7 = -8978284593269615834LL;
int var_9 = 137128329;
short var_10 = (short)26674;
long long int var_14 = -2468134238818301499LL;
unsigned long long int var_16 = 15207335381533313066ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)204;
unsigned short var_19 = (unsigned short)8407;
void init() {
}

void checksum() {
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
