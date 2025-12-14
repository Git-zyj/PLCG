#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12136357716067810873ULL;
unsigned short var_1 = (unsigned short)43273;
signed char var_3 = (signed char)-63;
int var_5 = 1668587642;
int var_12 = 1860601425;
unsigned char var_14 = (unsigned char)191;
int zero = 0;
int var_17 = 1720118954;
unsigned long long int var_18 = 11473148619331577432ULL;
unsigned long long int var_19 = 2841010124026662095ULL;
unsigned char var_20 = (unsigned char)162;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
