#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 385241112;
unsigned char var_1 = (unsigned char)232;
int var_2 = -1986087379;
short var_6 = (short)-25998;
unsigned short var_7 = (unsigned short)43334;
unsigned short var_8 = (unsigned short)51710;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_10 = (short)31177;
short var_11 = (short)-25257;
unsigned int var_12 = 1910109116U;
unsigned long long int var_13 = 17848727487937524266ULL;
unsigned short var_14 = (unsigned short)18200;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
