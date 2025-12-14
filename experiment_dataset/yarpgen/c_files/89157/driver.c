#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4302125501182877277LL;
long long int var_3 = -7686145198496019052LL;
signed char var_6 = (signed char)-81;
unsigned short var_7 = (unsigned short)43629;
int var_8 = 1402785444;
short var_10 = (short)-29625;
long long int var_11 = -2937064330922708260LL;
int zero = 0;
short var_16 = (short)29622;
unsigned short var_17 = (unsigned short)29416;
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
