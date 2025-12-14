#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43801;
unsigned int var_2 = 982067489U;
unsigned short var_3 = (unsigned short)7230;
unsigned short var_5 = (unsigned short)5879;
unsigned int var_8 = 2296932833U;
int zero = 0;
int var_10 = -1105853485;
unsigned char var_11 = (unsigned char)100;
unsigned short var_12 = (unsigned short)17611;
unsigned short var_13 = (unsigned short)28524;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
