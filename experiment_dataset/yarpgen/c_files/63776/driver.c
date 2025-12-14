#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2356513775U;
unsigned short var_3 = (unsigned short)28767;
signed char var_4 = (signed char)104;
long long int var_5 = -8881727280054001558LL;
short var_11 = (short)12179;
signed char var_13 = (signed char)-66;
int zero = 0;
long long int var_18 = 99635108778490739LL;
signed char var_19 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
