#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37229;
long long int var_2 = -415957033121065905LL;
unsigned short var_3 = (unsigned short)33462;
unsigned char var_4 = (unsigned char)5;
signed char var_5 = (signed char)-93;
short var_6 = (short)-28676;
unsigned char var_8 = (unsigned char)141;
short var_9 = (short)-14545;
int var_10 = 1631075985;
int zero = 0;
short var_11 = (short)-6397;
long long int var_12 = 2881258062016153932LL;
int var_13 = -678913329;
short var_14 = (short)-9110;
unsigned char var_15 = (unsigned char)50;
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
