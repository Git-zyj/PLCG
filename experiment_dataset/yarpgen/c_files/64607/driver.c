#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)169;
unsigned short var_4 = (unsigned short)45259;
unsigned long long int var_5 = 3278885642283174751ULL;
short var_7 = (short)-2854;
unsigned short var_8 = (unsigned short)8563;
short var_9 = (short)-18690;
unsigned char var_10 = (unsigned char)187;
short var_14 = (short)-12756;
int zero = 0;
short var_15 = (short)-27776;
unsigned char var_16 = (unsigned char)240;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 17905964830097418102ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
