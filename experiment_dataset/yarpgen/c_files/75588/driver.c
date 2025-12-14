#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)12429;
int var_6 = -297611321;
signed char var_13 = (signed char)57;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)198;
int zero = 0;
long long int var_16 = -4899636378388783507LL;
unsigned long long int var_17 = 7029442222314667865ULL;
void init() {
}

void checksum() {
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
