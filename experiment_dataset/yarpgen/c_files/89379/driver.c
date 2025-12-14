#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)235;
int var_6 = 1064125990;
signed char var_9 = (signed char)90;
unsigned char var_10 = (unsigned char)213;
_Bool var_11 = (_Bool)0;
short var_14 = (short)12735;
int zero = 0;
int var_17 = 106253146;
short var_18 = (short)-10716;
unsigned long long int var_19 = 17142439479441481270ULL;
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
