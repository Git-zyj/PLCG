#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)98;
unsigned char var_6 = (unsigned char)133;
unsigned long long int var_7 = 14281600524862793295ULL;
unsigned char var_8 = (unsigned char)45;
short var_11 = (short)14186;
unsigned char var_12 = (unsigned char)66;
unsigned char var_16 = (unsigned char)43;
unsigned long long int var_17 = 2562402590429390070ULL;
short var_18 = (short)10144;
unsigned int var_19 = 2118422060U;
int zero = 0;
short var_20 = (short)11874;
unsigned short var_21 = (unsigned short)52705;
unsigned long long int var_22 = 2514865575696751051ULL;
unsigned char var_23 = (unsigned char)64;
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
