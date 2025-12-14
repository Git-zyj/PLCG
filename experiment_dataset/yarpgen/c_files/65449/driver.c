#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -15962819;
unsigned int var_3 = 3845920185U;
unsigned short var_4 = (unsigned short)34735;
unsigned char var_5 = (unsigned char)182;
unsigned short var_7 = (unsigned short)63038;
unsigned short var_13 = (unsigned short)46531;
unsigned char var_14 = (unsigned char)196;
unsigned short var_16 = (unsigned short)26261;
int zero = 0;
unsigned long long int var_17 = 5114990307314700320ULL;
int var_18 = 222709941;
int var_19 = -508506149;
short var_20 = (short)30709;
short var_21 = (short)19561;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
