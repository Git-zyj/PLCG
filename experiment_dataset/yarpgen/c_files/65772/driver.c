#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5036;
unsigned short var_4 = (unsigned short)32230;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1450091969U;
unsigned int var_8 = 722024264U;
int var_10 = -1500020293;
unsigned int var_12 = 148401664U;
unsigned short var_15 = (unsigned short)5891;
int zero = 0;
long long int var_16 = 3069332988446037747LL;
_Bool var_17 = (_Bool)0;
int var_18 = -1633777411;
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
