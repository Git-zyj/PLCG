#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)24590;
unsigned char var_5 = (unsigned char)195;
signed char var_6 = (signed char)113;
unsigned short var_7 = (unsigned short)61334;
int zero = 0;
unsigned long long int var_16 = 7636006615148325800ULL;
short var_17 = (short)30031;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
