#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_3 = (unsigned short)27604;
signed char var_4 = (signed char)122;
unsigned short var_5 = (unsigned short)25366;
int var_6 = 595982131;
unsigned short var_9 = (unsigned short)33166;
unsigned char var_13 = (unsigned char)230;
int zero = 0;
unsigned char var_15 = (unsigned char)239;
int var_16 = -897686863;
unsigned short var_17 = (unsigned short)48279;
long long int var_18 = 6446448111825919579LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
