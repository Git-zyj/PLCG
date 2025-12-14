#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)61;
signed char var_4 = (signed char)46;
short var_5 = (short)25948;
int var_6 = 787308571;
signed char var_7 = (signed char)-49;
signed char var_8 = (signed char)-122;
int zero = 0;
unsigned long long int var_15 = 2876183624705964038ULL;
signed char var_16 = (signed char)-62;
unsigned short var_17 = (unsigned short)32577;
unsigned long long int var_18 = 11689257074988648946ULL;
unsigned short var_19 = (unsigned short)32263;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
