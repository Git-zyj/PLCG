#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11273209653006032575ULL;
unsigned short var_2 = (unsigned short)25553;
unsigned short var_3 = (unsigned short)7033;
unsigned short var_4 = (unsigned short)64581;
unsigned char var_5 = (unsigned char)140;
short var_6 = (short)-20153;
signed char var_7 = (signed char)12;
unsigned long long int var_8 = 4655848664384260846ULL;
unsigned char var_9 = (unsigned char)166;
int var_10 = 1591657165;
int zero = 0;
int var_11 = 1856429143;
unsigned char var_12 = (unsigned char)133;
unsigned short var_13 = (unsigned short)13575;
void init() {
}

void checksum() {
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
