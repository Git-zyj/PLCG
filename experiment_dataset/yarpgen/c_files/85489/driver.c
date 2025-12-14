#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)142;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 823057803825922810ULL;
int zero = 0;
short var_11 = (short)28528;
unsigned short var_12 = (unsigned short)5390;
signed char var_13 = (signed char)10;
unsigned short var_14 = (unsigned short)37995;
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
