#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_7 = (signed char)17;
long long int var_8 = 330332129375011847LL;
unsigned long long int var_9 = 7044223212396654981ULL;
unsigned short var_15 = (unsigned short)52037;
int zero = 0;
signed char var_17 = (signed char)19;
short var_18 = (short)23049;
unsigned char var_19 = (unsigned char)201;
int var_20 = -348746171;
void init() {
}

void checksum() {
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
