#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31384;
signed char var_1 = (signed char)74;
signed char var_2 = (signed char)102;
unsigned long long int var_5 = 14563821341040834478ULL;
unsigned long long int var_9 = 10167957555530612298ULL;
long long int var_11 = -6469920526113713610LL;
unsigned int var_12 = 1067296411U;
short var_13 = (short)10760;
unsigned char var_14 = (unsigned char)164;
short var_15 = (short)14652;
unsigned long long int var_19 = 18276968485766385901ULL;
int zero = 0;
unsigned int var_20 = 2440693455U;
signed char var_21 = (signed char)-6;
unsigned int var_22 = 2163575905U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
