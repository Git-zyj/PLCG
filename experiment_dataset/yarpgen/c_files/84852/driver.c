#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 285045076;
signed char var_2 = (signed char)-92;
int var_5 = -268091539;
short var_6 = (short)-8414;
signed char var_7 = (signed char)88;
int var_9 = 2019799949;
unsigned char var_10 = (unsigned char)148;
signed char var_12 = (signed char)84;
long long int var_15 = 139350525012928024LL;
signed char var_17 = (signed char)-70;
unsigned char var_19 = (unsigned char)15;
int zero = 0;
signed char var_20 = (signed char)43;
unsigned short var_21 = (unsigned short)35873;
short var_22 = (short)-25154;
unsigned long long int var_23 = 1692759654699401144ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
