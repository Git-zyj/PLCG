#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)95;
unsigned long long int var_2 = 10445846311119874125ULL;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)55043;
unsigned char var_6 = (unsigned char)31;
short var_7 = (short)-24855;
unsigned int var_8 = 3951884469U;
signed char var_9 = (signed char)13;
int zero = 0;
unsigned short var_10 = (unsigned short)13618;
unsigned char var_11 = (unsigned char)201;
unsigned short var_12 = (unsigned short)554;
long long int var_13 = -7746773327387963129LL;
unsigned char var_14 = (unsigned char)10;
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
