#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 1530757964U;
signed char var_2 = (signed char)-46;
unsigned short var_3 = (unsigned short)26443;
unsigned short var_4 = (unsigned short)48792;
short var_5 = (short)-14915;
unsigned char var_6 = (unsigned char)128;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)50974;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)43225;
int zero = 0;
unsigned long long int var_11 = 7363674161842270965ULL;
unsigned char var_12 = (unsigned char)227;
signed char var_13 = (signed char)101;
short var_14 = (short)28905;
short var_15 = (short)-27465;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
