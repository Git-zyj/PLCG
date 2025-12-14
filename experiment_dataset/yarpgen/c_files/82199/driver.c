#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2796253694823902572LL;
signed char var_5 = (signed char)78;
unsigned short var_8 = (unsigned short)61181;
signed char var_11 = (signed char)-12;
unsigned long long int var_12 = 4087621252654214328ULL;
int var_13 = -200784115;
int zero = 0;
short var_14 = (short)17285;
signed char var_15 = (signed char)-101;
unsigned char var_16 = (unsigned char)28;
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
