#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -2032080125;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)18300;
signed char var_9 = (signed char)-42;
unsigned short var_10 = (unsigned short)50558;
unsigned char var_14 = (unsigned char)116;
unsigned char var_15 = (unsigned char)191;
int zero = 0;
short var_18 = (short)-14496;
int var_19 = 912970897;
signed char var_20 = (signed char)7;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
