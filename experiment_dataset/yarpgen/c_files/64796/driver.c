#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4896996895020257699LL;
unsigned short var_3 = (unsigned short)61602;
short var_6 = (short)9797;
unsigned short var_11 = (unsigned short)9045;
unsigned long long int var_12 = 12581518794425617126ULL;
unsigned short var_13 = (unsigned short)5152;
int zero = 0;
signed char var_19 = (signed char)9;
unsigned short var_20 = (unsigned short)19930;
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
