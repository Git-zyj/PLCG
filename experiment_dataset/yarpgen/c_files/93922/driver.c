#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26880;
unsigned int var_1 = 252006417U;
unsigned int var_4 = 1953225222U;
unsigned long long int var_7 = 9960435038504684349ULL;
signed char var_9 = (signed char)67;
short var_10 = (short)-12979;
int zero = 0;
unsigned long long int var_15 = 13344885674652703633ULL;
unsigned short var_16 = (unsigned short)36271;
int var_17 = -406779816;
short var_18 = (short)-21644;
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
