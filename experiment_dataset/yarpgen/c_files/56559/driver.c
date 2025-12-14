#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 810757658;
short var_1 = (short)-6253;
unsigned short var_3 = (unsigned short)49455;
unsigned long long int var_4 = 7312709449520856792ULL;
signed char var_8 = (signed char)-70;
unsigned short var_9 = (unsigned short)55229;
short var_11 = (short)-31587;
short var_12 = (short)-29072;
int zero = 0;
unsigned long long int var_15 = 8960198169612436732ULL;
unsigned short var_16 = (unsigned short)36152;
void init() {
}

void checksum() {
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
