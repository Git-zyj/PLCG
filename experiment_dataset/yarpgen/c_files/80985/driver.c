#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-17072;
unsigned char var_5 = (unsigned char)63;
unsigned char var_6 = (unsigned char)164;
unsigned short var_7 = (unsigned short)13952;
unsigned char var_10 = (unsigned char)97;
signed char var_14 = (signed char)-42;
int zero = 0;
unsigned char var_19 = (unsigned char)156;
unsigned char var_20 = (unsigned char)125;
signed char var_21 = (signed char)-81;
long long int var_22 = -2814626889684050916LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
