#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11537;
unsigned short var_2 = (unsigned short)56360;
unsigned int var_3 = 2361414144U;
unsigned long long int var_4 = 11989097540457147026ULL;
unsigned int var_5 = 2201358191U;
long long int var_6 = 3169703979174257138LL;
int zero = 0;
int var_12 = -230758775;
signed char var_13 = (signed char)-31;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
