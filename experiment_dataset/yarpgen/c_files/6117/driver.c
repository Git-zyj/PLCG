#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)90;
unsigned short var_2 = (unsigned short)3962;
unsigned char var_3 = (unsigned char)72;
short var_4 = (short)-26511;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 14672172195043020513ULL;
unsigned short var_11 = (unsigned short)5228;
unsigned long long int var_12 = 7287830107648191366ULL;
short var_14 = (short)18496;
short var_15 = (short)-8869;
int zero = 0;
short var_18 = (short)-27905;
short var_19 = (short)3696;
unsigned int var_20 = 2136805313U;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-7128;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
