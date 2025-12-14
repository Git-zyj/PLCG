#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3545512404U;
unsigned int var_1 = 3060807460U;
short var_2 = (short)-12149;
unsigned short var_3 = (unsigned short)55750;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3106350346U;
signed char var_6 = (signed char)-66;
signed char var_7 = (signed char)101;
unsigned int var_8 = 2527035179U;
unsigned int var_9 = 611699915U;
_Bool var_10 = (_Bool)0;
int var_11 = -1295085242;
int var_12 = -1570385408;
long long int var_13 = 3982088710168858311LL;
unsigned char var_14 = (unsigned char)243;
long long int var_15 = 30741741332388439LL;
int zero = 0;
unsigned char var_16 = (unsigned char)23;
unsigned int var_17 = 955665354U;
unsigned char var_18 = (unsigned char)247;
short var_19 = (short)-22948;
int var_20 = 651582307;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
