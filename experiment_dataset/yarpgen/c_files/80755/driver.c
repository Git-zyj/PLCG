#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)11;
unsigned char var_3 = (unsigned char)150;
unsigned short var_8 = (unsigned short)32291;
unsigned short var_9 = (unsigned short)7475;
unsigned char var_12 = (unsigned char)200;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 731549106U;
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
