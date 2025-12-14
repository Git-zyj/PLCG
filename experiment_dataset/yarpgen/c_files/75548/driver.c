#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -1516688993903618969LL;
long long int var_7 = 3375387295927518620LL;
int var_10 = 1390642334;
short var_12 = (short)-27404;
long long int var_13 = 5785279840034950821LL;
short var_15 = (short)-14025;
int zero = 0;
int var_16 = 1206666315;
signed char var_17 = (signed char)-80;
unsigned char var_18 = (unsigned char)183;
unsigned short var_19 = (unsigned short)61905;
unsigned short var_20 = (unsigned short)39624;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
