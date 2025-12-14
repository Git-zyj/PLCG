#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27018;
unsigned int var_2 = 3896211698U;
unsigned int var_3 = 2876483907U;
unsigned char var_4 = (unsigned char)157;
unsigned char var_5 = (unsigned char)147;
unsigned char var_6 = (unsigned char)69;
short var_8 = (short)-8849;
unsigned long long int var_9 = 14465568004084169474ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)34515;
short var_13 = (short)25774;
int zero = 0;
short var_15 = (short)30263;
_Bool var_16 = (_Bool)0;
int var_17 = 1227224571;
void init() {
}

void checksum() {
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
