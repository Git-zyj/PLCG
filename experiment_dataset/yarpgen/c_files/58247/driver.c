#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2093702226964488573ULL;
int var_1 = -1016128329;
unsigned short var_2 = (unsigned short)59175;
long long int var_4 = 6062902931116111681LL;
int var_5 = 1852673432;
signed char var_7 = (signed char)-90;
unsigned int var_10 = 2291028388U;
signed char var_11 = (signed char)117;
unsigned long long int var_12 = 7355366650363154203ULL;
int zero = 0;
short var_13 = (short)-9701;
unsigned short var_14 = (unsigned short)59509;
signed char var_15 = (signed char)-8;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
