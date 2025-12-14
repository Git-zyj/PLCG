#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-29248;
short var_9 = (short)-12187;
short var_10 = (short)-17348;
unsigned short var_12 = (unsigned short)60420;
unsigned char var_14 = (unsigned char)22;
long long int var_15 = 306508376646929932LL;
unsigned short var_17 = (unsigned short)2767;
int zero = 0;
short var_19 = (short)29787;
signed char var_20 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
