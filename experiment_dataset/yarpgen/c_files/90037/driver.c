#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16566;
unsigned long long int var_5 = 3859740387056389514ULL;
unsigned long long int var_9 = 2564680608095221895ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)20597;
short var_11 = (short)-32045;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
