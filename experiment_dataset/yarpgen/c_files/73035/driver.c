#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24855;
unsigned long long int var_2 = 17321545527717067656ULL;
unsigned short var_7 = (unsigned short)30356;
unsigned int var_10 = 304258567U;
unsigned short var_12 = (unsigned short)54222;
int var_13 = 1458170897;
int zero = 0;
unsigned char var_20 = (unsigned char)244;
unsigned short var_21 = (unsigned short)47043;
unsigned long long int var_22 = 14471932735058860357ULL;
unsigned short var_23 = (unsigned short)16893;
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
