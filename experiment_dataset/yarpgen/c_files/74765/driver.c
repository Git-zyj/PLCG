#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)110;
short var_5 = (short)-30739;
short var_6 = (short)18306;
_Bool var_7 = (_Bool)0;
unsigned char var_11 = (unsigned char)129;
signed char var_16 = (signed char)-2;
unsigned long long int var_17 = 9776991811567935448ULL;
int zero = 0;
unsigned int var_19 = 1149896284U;
unsigned int var_20 = 2160280334U;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
