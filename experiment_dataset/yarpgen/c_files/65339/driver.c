#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34048;
unsigned char var_2 = (unsigned char)28;
unsigned char var_3 = (unsigned char)134;
unsigned char var_4 = (unsigned char)15;
unsigned char var_5 = (unsigned char)151;
unsigned short var_10 = (unsigned short)30578;
unsigned char var_11 = (unsigned char)220;
int zero = 0;
unsigned int var_12 = 3764654046U;
long long int var_13 = 3567734126855113387LL;
int var_14 = -1267951037;
void init() {
}

void checksum() {
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
