#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 852409812131151729ULL;
_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)194;
unsigned short var_6 = (unsigned short)40362;
unsigned short var_9 = (unsigned short)50526;
short var_11 = (short)-18525;
int zero = 0;
unsigned char var_15 = (unsigned char)116;
unsigned char var_16 = (unsigned char)198;
unsigned long long int var_17 = 17229927839313925046ULL;
void init() {
}

void checksum() {
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
