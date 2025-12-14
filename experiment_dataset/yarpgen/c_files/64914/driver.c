#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -230156995;
unsigned short var_4 = (unsigned short)28031;
long long int var_5 = -3997019306850588601LL;
short var_6 = (short)8991;
int var_7 = 541527863;
int var_12 = -709494420;
unsigned int var_13 = 3431652730U;
unsigned int var_15 = 3897456635U;
short var_17 = (short)-28741;
int var_18 = 402939459;
int var_19 = 442136089;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 3310585941277616254LL;
unsigned int var_22 = 12320097U;
unsigned short var_23 = (unsigned short)60321;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
