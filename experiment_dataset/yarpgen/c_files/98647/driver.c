#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-47;
unsigned int var_2 = 2320620650U;
int var_4 = 816697089;
unsigned short var_5 = (unsigned short)47708;
long long int var_6 = -8229882537004021880LL;
unsigned short var_9 = (unsigned short)16656;
short var_10 = (short)7170;
long long int var_11 = 6928348190490450295LL;
signed char var_12 = (signed char)-95;
short var_13 = (short)-12856;
unsigned short var_14 = (unsigned short)42185;
int zero = 0;
int var_15 = 600542346;
long long int var_16 = -2097709402522873265LL;
signed char var_17 = (signed char)15;
unsigned short var_18 = (unsigned short)8563;
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
