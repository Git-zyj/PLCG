#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-67;
unsigned long long int var_2 = 7681606082973512277ULL;
int var_4 = 182280135;
_Bool var_7 = (_Bool)1;
long long int var_8 = 8589832263505318606LL;
unsigned long long int var_13 = 10080294591549977077ULL;
unsigned long long int var_14 = 7887752935655061929ULL;
int zero = 0;
unsigned int var_15 = 2129371877U;
int var_16 = -1736232822;
unsigned long long int var_17 = 11617604475647612538ULL;
unsigned short var_18 = (unsigned short)17126;
void init() {
}

void checksum() {
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
