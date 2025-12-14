#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)4;
unsigned short var_3 = (unsigned short)21890;
long long int var_6 = 7247067097845125194LL;
unsigned short var_8 = (unsigned short)35015;
unsigned short var_9 = (unsigned short)53913;
unsigned char var_12 = (unsigned char)140;
short var_13 = (short)10453;
int zero = 0;
unsigned int var_15 = 3810090411U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
