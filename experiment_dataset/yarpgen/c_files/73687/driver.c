#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)66;
_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)29614;
int var_8 = 793259826;
unsigned short var_9 = (unsigned short)51867;
unsigned short var_10 = (unsigned short)20045;
unsigned char var_11 = (unsigned char)104;
short var_12 = (short)-7858;
int zero = 0;
int var_13 = -379769492;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-104;
unsigned char var_16 = (unsigned char)93;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
