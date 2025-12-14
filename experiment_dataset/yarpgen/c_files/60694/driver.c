#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9601609766782880948ULL;
int var_1 = -1988729312;
signed char var_2 = (signed char)-31;
int var_4 = 1591630507;
unsigned short var_5 = (unsigned short)7247;
unsigned short var_7 = (unsigned short)44926;
unsigned char var_8 = (unsigned char)81;
unsigned short var_9 = (unsigned short)21507;
short var_10 = (short)-2083;
signed char var_11 = (signed char)77;
int zero = 0;
short var_12 = (short)-19487;
unsigned short var_13 = (unsigned short)12134;
short var_14 = (short)11381;
unsigned long long int var_15 = 6839757257214068175ULL;
void init() {
}

void checksum() {
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
