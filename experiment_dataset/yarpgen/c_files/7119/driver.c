#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)8;
signed char var_3 = (signed char)91;
long long int var_5 = 6468252024424032228LL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)167;
short var_10 = (short)29164;
unsigned short var_12 = (unsigned short)35211;
int zero = 0;
unsigned char var_13 = (unsigned char)166;
int var_14 = -1714731016;
short var_15 = (short)-3198;
long long int var_16 = -4033596094291893075LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
