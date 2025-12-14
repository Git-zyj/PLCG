#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)30;
long long int var_7 = -5049594659568417734LL;
unsigned short var_11 = (unsigned short)18942;
_Bool var_12 = (_Bool)1;
long long int var_14 = 5901090136159876661LL;
unsigned char var_15 = (unsigned char)74;
int zero = 0;
long long int var_17 = 8237643329603895623LL;
unsigned short var_18 = (unsigned short)35505;
unsigned short var_19 = (unsigned short)4506;
void init() {
}

void checksum() {
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
