#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10638;
unsigned char var_2 = (unsigned char)9;
unsigned long long int var_3 = 7890593494811277773ULL;
signed char var_7 = (signed char)91;
signed char var_8 = (signed char)-24;
unsigned char var_9 = (unsigned char)134;
short var_10 = (short)-18084;
signed char var_11 = (signed char)109;
signed char var_12 = (signed char)37;
int zero = 0;
short var_13 = (short)27828;
unsigned char var_14 = (unsigned char)8;
int var_15 = 475726598;
unsigned long long int var_16 = 14282520834256563206ULL;
void init() {
}

void checksum() {
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
