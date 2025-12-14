#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 789116731;
unsigned char var_2 = (unsigned char)31;
short var_8 = (short)6318;
short var_16 = (short)2338;
int zero = 0;
signed char var_17 = (signed char)-41;
long long int var_18 = 5236738261499900979LL;
unsigned short var_19 = (unsigned short)61212;
void init() {
}

void checksum() {
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
