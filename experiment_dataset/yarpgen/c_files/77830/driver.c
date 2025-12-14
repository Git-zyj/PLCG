#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1163321446U;
int var_1 = -683646240;
unsigned short var_5 = (unsigned short)37376;
signed char var_7 = (signed char)125;
signed char var_8 = (signed char)8;
unsigned char var_9 = (unsigned char)66;
unsigned int var_10 = 2880488121U;
unsigned int var_13 = 2075927692U;
unsigned long long int var_14 = 8647960269329837026ULL;
int zero = 0;
int var_15 = 949026014;
unsigned short var_16 = (unsigned short)45564;
int var_17 = 322287898;
unsigned char var_18 = (unsigned char)119;
int var_19 = -1292742767;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
