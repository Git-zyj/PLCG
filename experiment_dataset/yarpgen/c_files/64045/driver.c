#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52115;
unsigned char var_3 = (unsigned char)13;
int var_4 = -1340398948;
unsigned int var_5 = 4083989822U;
unsigned short var_6 = (unsigned short)13845;
short var_10 = (short)-6077;
int var_11 = -2010047395;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 30000560U;
int zero = 0;
unsigned char var_17 = (unsigned char)82;
unsigned short var_18 = (unsigned short)8664;
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
