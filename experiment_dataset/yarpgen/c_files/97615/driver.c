#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2927933909U;
signed char var_1 = (signed char)-32;
long long int var_3 = 5367677703109579743LL;
unsigned char var_5 = (unsigned char)10;
_Bool var_7 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)-99;
unsigned int var_11 = 2700608865U;
short var_12 = (short)-27086;
short var_13 = (short)3302;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
