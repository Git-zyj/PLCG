#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1438716655597968273LL;
int var_2 = -285017577;
signed char var_5 = (signed char)88;
int var_6 = -1282608666;
signed char var_7 = (signed char)1;
unsigned long long int var_10 = 6833244856660309527ULL;
signed char var_12 = (signed char)59;
int zero = 0;
signed char var_14 = (signed char)70;
short var_15 = (short)-17145;
signed char var_16 = (signed char)-125;
unsigned short var_17 = (unsigned short)25184;
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
