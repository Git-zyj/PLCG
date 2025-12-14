#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)243;
short var_1 = (short)-21472;
long long int var_2 = 415242750690372377LL;
unsigned short var_3 = (unsigned short)28056;
unsigned short var_4 = (unsigned short)57414;
unsigned char var_6 = (unsigned char)234;
unsigned long long int var_8 = 6553794789052361801ULL;
short var_9 = (short)-483;
short var_10 = (short)30972;
int zero = 0;
long long int var_12 = 1857980455689317833LL;
short var_13 = (short)31224;
unsigned short var_14 = (unsigned short)5213;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
