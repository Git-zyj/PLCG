#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24986;
short var_1 = (short)26480;
short var_2 = (short)-5545;
unsigned int var_4 = 2493797623U;
int var_5 = -1276163663;
unsigned int var_7 = 4234914817U;
unsigned short var_9 = (unsigned short)65206;
long long int var_10 = -5818923797115860137LL;
int zero = 0;
short var_11 = (short)21371;
unsigned short var_12 = (unsigned short)37950;
unsigned short var_13 = (unsigned short)49086;
long long int var_14 = 1798606779933548464LL;
void init() {
}

void checksum() {
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
