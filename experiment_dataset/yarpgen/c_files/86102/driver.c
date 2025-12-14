#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1322521752;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)63446;
unsigned char var_11 = (unsigned char)122;
unsigned char var_15 = (unsigned char)205;
unsigned int var_16 = 1320109880U;
signed char var_17 = (signed char)90;
int zero = 0;
unsigned char var_18 = (unsigned char)153;
int var_19 = -1130661165;
void init() {
}

void checksum() {
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
