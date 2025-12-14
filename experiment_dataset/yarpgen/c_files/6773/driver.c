#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)90;
unsigned short var_3 = (unsigned short)58632;
short var_5 = (short)-22349;
signed char var_6 = (signed char)99;
_Bool var_8 = (_Bool)1;
int var_9 = -1502923271;
long long int var_11 = -8062124150264287170LL;
int var_12 = 693707809;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)233;
int zero = 0;
short var_17 = (short)-26221;
short var_18 = (short)-876;
void init() {
}

void checksum() {
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
