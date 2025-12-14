#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)189;
unsigned short var_6 = (unsigned short)63721;
unsigned char var_7 = (unsigned char)174;
unsigned short var_9 = (unsigned short)24612;
unsigned char var_10 = (unsigned char)17;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)116;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 854523882U;
unsigned int var_17 = 959451924U;
short var_18 = (short)-5108;
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
