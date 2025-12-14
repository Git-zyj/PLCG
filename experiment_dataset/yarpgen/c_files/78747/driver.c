#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-17;
short var_7 = (short)-22721;
unsigned long long int var_8 = 4604364667124059915ULL;
unsigned char var_9 = (unsigned char)198;
unsigned short var_10 = (unsigned short)30870;
int zero = 0;
signed char var_12 = (signed char)109;
unsigned char var_13 = (unsigned char)219;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-16874;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
