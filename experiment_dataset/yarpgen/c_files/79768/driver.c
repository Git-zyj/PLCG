#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)81;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-68;
unsigned long long int var_3 = 231480721466152419ULL;
short var_4 = (short)-15695;
unsigned int var_5 = 2129943095U;
unsigned short var_6 = (unsigned short)41971;
unsigned char var_7 = (unsigned char)192;
signed char var_8 = (signed char)-39;
unsigned char var_9 = (unsigned char)178;
int zero = 0;
unsigned short var_10 = (unsigned short)52113;
signed char var_11 = (signed char)-33;
short var_12 = (short)-4412;
_Bool var_13 = (_Bool)0;
int var_14 = -540033995;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
