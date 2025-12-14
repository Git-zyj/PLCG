#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)45438;
signed char var_4 = (signed char)41;
unsigned long long int var_5 = 3279645202394762192ULL;
unsigned short var_7 = (unsigned short)64471;
short var_8 = (short)22969;
signed char var_11 = (signed char)30;
int zero = 0;
signed char var_14 = (signed char)-43;
signed char var_15 = (signed char)-43;
signed char var_16 = (signed char)-115;
void init() {
}

void checksum() {
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
