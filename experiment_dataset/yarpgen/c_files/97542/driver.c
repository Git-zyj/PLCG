#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17450;
unsigned int var_1 = 1120935467U;
long long int var_4 = 1813395586451153706LL;
unsigned int var_5 = 3467803374U;
signed char var_6 = (signed char)75;
unsigned long long int var_7 = 12943468007882040076ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-22;
signed char var_14 = (signed char)81;
unsigned short var_15 = (unsigned short)39508;
long long int var_16 = -513577949603734999LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
