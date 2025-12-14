#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)6078;
long long int var_7 = 2510620414598858365LL;
_Bool var_8 = (_Bool)1;
short var_11 = (short)23116;
short var_12 = (short)6842;
int var_13 = 950164410;
unsigned char var_14 = (unsigned char)154;
unsigned long long int var_15 = 12567350571901840210ULL;
long long int var_16 = 1192134015720454362LL;
int zero = 0;
unsigned short var_18 = (unsigned short)29149;
signed char var_19 = (signed char)-96;
unsigned short var_20 = (unsigned short)32374;
unsigned short var_21 = (unsigned short)14802;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
