#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43596;
int var_1 = 1966104704;
short var_6 = (short)15844;
unsigned long long int var_8 = 2542212057738356798ULL;
unsigned char var_10 = (unsigned char)217;
unsigned int var_11 = 2808664329U;
signed char var_12 = (signed char)-23;
unsigned short var_13 = (unsigned short)36162;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 425418200;
int var_16 = 1729758094;
short var_17 = (short)-12017;
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
