#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7516;
unsigned int var_2 = 2742282480U;
short var_3 = (short)-32160;
short var_8 = (short)3804;
unsigned int var_10 = 1566659146U;
unsigned int var_12 = 3613793435U;
int var_13 = -1777776520;
int zero = 0;
unsigned int var_14 = 585349648U;
unsigned int var_15 = 3076764925U;
unsigned char var_16 = (unsigned char)68;
unsigned char var_17 = (unsigned char)249;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
