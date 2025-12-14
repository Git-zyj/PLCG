#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)63639;
int var_6 = -1040072325;
unsigned char var_7 = (unsigned char)100;
short var_8 = (short)-6401;
int var_9 = -1136083801;
int zero = 0;
unsigned char var_10 = (unsigned char)185;
unsigned short var_11 = (unsigned short)57203;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)51222;
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
