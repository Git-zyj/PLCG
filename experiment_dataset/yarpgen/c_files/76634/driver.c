#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8478522330567724995LL;
long long int var_1 = 3963094768183950366LL;
unsigned short var_5 = (unsigned short)2930;
short var_7 = (short)-6902;
unsigned char var_10 = (unsigned char)3;
int zero = 0;
unsigned long long int var_11 = 13549439517204714487ULL;
signed char var_12 = (signed char)-61;
int var_13 = -317001485;
unsigned int var_14 = 4287678212U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
