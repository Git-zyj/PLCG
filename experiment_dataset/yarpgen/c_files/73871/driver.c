#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30180;
unsigned short var_2 = (unsigned short)60817;
long long int var_4 = -1109679835162896070LL;
short var_5 = (short)19243;
unsigned char var_8 = (unsigned char)230;
short var_10 = (short)27508;
short var_13 = (short)10201;
unsigned long long int var_15 = 1955769553812933691ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)52103;
unsigned long long int var_18 = 14201357446693392437ULL;
unsigned int var_19 = 2106912286U;
void init() {
}

void checksum() {
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
