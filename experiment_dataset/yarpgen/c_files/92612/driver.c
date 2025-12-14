#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1940465569U;
unsigned char var_2 = (unsigned char)104;
long long int var_8 = -7986626061777580139LL;
long long int var_10 = -2912985719788123455LL;
short var_13 = (short)12573;
int zero = 0;
unsigned int var_16 = 1865153387U;
signed char var_17 = (signed char)126;
unsigned int var_18 = 876000067U;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)43667;
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
