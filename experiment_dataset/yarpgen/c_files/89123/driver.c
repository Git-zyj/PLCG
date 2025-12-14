#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-93;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)8634;
int var_3 = 972135215;
unsigned int var_5 = 1874727398U;
int var_6 = 1066285178;
unsigned char var_7 = (unsigned char)227;
unsigned short var_8 = (unsigned short)10759;
unsigned short var_9 = (unsigned short)11051;
int zero = 0;
signed char var_10 = (signed char)-64;
signed char var_11 = (signed char)55;
unsigned long long int var_12 = 9742891225510590210ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
