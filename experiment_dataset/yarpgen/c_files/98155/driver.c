#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 831126982U;
short var_1 = (short)-30274;
unsigned short var_2 = (unsigned short)39679;
int var_3 = -1272336813;
unsigned char var_4 = (unsigned char)115;
long long int var_5 = 6079583955702343376LL;
unsigned short var_6 = (unsigned short)36345;
unsigned int var_7 = 1786165967U;
short var_8 = (short)-13372;
int var_9 = 952333252;
long long int var_10 = 5923621815795743992LL;
short var_11 = (short)-202;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)69;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
