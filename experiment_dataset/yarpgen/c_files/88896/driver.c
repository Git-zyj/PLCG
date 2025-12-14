#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_4 = 2935622890U;
short var_5 = (short)7742;
unsigned int var_10 = 835089153U;
unsigned short var_13 = (unsigned short)19505;
int zero = 0;
long long int var_14 = -5188925140736634110LL;
unsigned long long int var_15 = 8681964448749835681ULL;
short var_16 = (short)-6753;
unsigned char var_17 = (unsigned char)9;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
