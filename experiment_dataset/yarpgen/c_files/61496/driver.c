#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31965;
unsigned int var_3 = 59073138U;
unsigned short var_4 = (unsigned short)32979;
unsigned short var_5 = (unsigned short)3672;
long long int var_7 = -5545557935906702564LL;
unsigned int var_8 = 1831554160U;
unsigned char var_10 = (unsigned char)181;
int var_11 = 1673873332;
int zero = 0;
unsigned int var_14 = 983718576U;
signed char var_15 = (signed char)-80;
long long int var_16 = -8868735730800742989LL;
int var_17 = -348765173;
signed char var_18 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
