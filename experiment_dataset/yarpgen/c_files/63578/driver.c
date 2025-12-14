#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 30649755U;
unsigned short var_1 = (unsigned short)10023;
unsigned short var_3 = (unsigned short)16279;
long long int var_4 = 5518297839884539419LL;
unsigned short var_8 = (unsigned short)2083;
unsigned long long int var_10 = 6813872902100976542ULL;
unsigned char var_14 = (unsigned char)42;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-2338;
unsigned short var_18 = (unsigned short)41716;
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
