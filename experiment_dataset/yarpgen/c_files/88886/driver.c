#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13145255226456860802ULL;
short var_3 = (short)13181;
unsigned short var_5 = (unsigned short)54781;
unsigned long long int var_6 = 2069166779043620262ULL;
unsigned char var_7 = (unsigned char)186;
int var_8 = -871571512;
long long int var_14 = 3103775301813512792LL;
int zero = 0;
long long int var_16 = 3860338928182577636LL;
unsigned short var_17 = (unsigned short)63758;
signed char var_18 = (signed char)-73;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
