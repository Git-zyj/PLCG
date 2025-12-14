#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 264140913;
signed char var_3 = (signed char)-70;
int var_4 = 2010132446;
long long int var_5 = 5687792533802879815LL;
unsigned short var_8 = (unsigned short)18973;
unsigned short var_10 = (unsigned short)8580;
short var_12 = (short)6367;
int zero = 0;
signed char var_15 = (signed char)-1;
signed char var_16 = (signed char)32;
long long int var_17 = 2460913773287150953LL;
long long int var_18 = 1566543838928303026LL;
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
