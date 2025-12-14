#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-3091;
unsigned short var_4 = (unsigned short)47096;
long long int var_5 = 8509671709633086228LL;
unsigned long long int var_7 = 12733386555359230299ULL;
unsigned short var_15 = (unsigned short)16241;
int zero = 0;
short var_17 = (short)-1975;
unsigned short var_18 = (unsigned short)31332;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
