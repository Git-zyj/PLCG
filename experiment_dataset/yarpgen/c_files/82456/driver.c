#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 866863333U;
signed char var_3 = (signed char)31;
int var_4 = 1878278741;
int var_5 = 334577393;
signed char var_6 = (signed char)89;
unsigned long long int var_10 = 5199372321423006063ULL;
short var_12 = (short)-15205;
unsigned char var_13 = (unsigned char)185;
unsigned short var_14 = (unsigned short)37549;
int zero = 0;
short var_15 = (short)-29944;
int var_16 = 726403836;
unsigned short var_17 = (unsigned short)10101;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
