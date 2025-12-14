#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)223;
_Bool var_1 = (_Bool)1;
long long int var_2 = 5272552111395937631LL;
unsigned int var_4 = 2644154156U;
short var_5 = (short)-16026;
int var_7 = 327025321;
unsigned char var_9 = (unsigned char)99;
_Bool var_10 = (_Bool)0;
int var_11 = -574338371;
unsigned short var_12 = (unsigned short)25966;
int var_14 = 168527966;
unsigned short var_16 = (unsigned short)34262;
int zero = 0;
signed char var_20 = (signed char)113;
int var_21 = 1378449073;
long long int var_22 = 4448864032726428535LL;
long long int var_23 = -2112286974514642844LL;
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
