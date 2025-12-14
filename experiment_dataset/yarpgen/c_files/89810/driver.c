#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 17114834291538369272ULL;
short var_5 = (short)19624;
short var_6 = (short)-22214;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)32;
signed char var_9 = (signed char)-114;
signed char var_10 = (signed char)-84;
short var_11 = (short)-15313;
int zero = 0;
unsigned char var_12 = (unsigned char)212;
unsigned long long int var_13 = 17268692903160607742ULL;
signed char var_14 = (signed char)-86;
unsigned char var_15 = (unsigned char)153;
short var_16 = (short)23917;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
