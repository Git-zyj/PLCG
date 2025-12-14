#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1323943575U;
_Bool var_4 = (_Bool)1;
long long int var_6 = 226611621015487447LL;
long long int var_8 = 8654192631049182901LL;
unsigned short var_9 = (unsigned short)25453;
long long int var_10 = -6893244009497521784LL;
unsigned char var_13 = (unsigned char)195;
int zero = 0;
unsigned short var_16 = (unsigned short)33123;
unsigned char var_17 = (unsigned char)110;
int var_18 = -1593094108;
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
