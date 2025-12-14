#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-15;
int var_2 = -878830191;
unsigned char var_3 = (unsigned char)144;
unsigned char var_5 = (unsigned char)26;
unsigned char var_8 = (unsigned char)226;
unsigned char var_9 = (unsigned char)95;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)115;
short var_12 = (short)23234;
_Bool var_13 = (_Bool)0;
unsigned long long int var_16 = 8957694449403424654ULL;
short var_17 = (short)18960;
int zero = 0;
unsigned long long int var_20 = 11163313408845230973ULL;
signed char var_21 = (signed char)-23;
_Bool var_22 = (_Bool)0;
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
