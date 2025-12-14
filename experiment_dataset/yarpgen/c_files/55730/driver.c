#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)30;
unsigned short var_4 = (unsigned short)26373;
int var_7 = -1742647299;
unsigned char var_8 = (unsigned char)94;
short var_10 = (short)-20975;
int zero = 0;
unsigned char var_11 = (unsigned char)11;
unsigned short var_12 = (unsigned short)8684;
unsigned short var_13 = (unsigned short)26102;
unsigned long long int var_14 = 4524401330103254325ULL;
unsigned char var_15 = (unsigned char)153;
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
