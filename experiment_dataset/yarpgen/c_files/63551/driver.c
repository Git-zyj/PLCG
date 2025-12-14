#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2160;
signed char var_2 = (signed char)-1;
unsigned short var_3 = (unsigned short)42230;
signed char var_4 = (signed char)62;
unsigned char var_5 = (unsigned char)183;
unsigned short var_6 = (unsigned short)16677;
int var_7 = 475170225;
unsigned short var_8 = (unsigned short)6626;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-78;
long long int var_12 = 2634862106809094384LL;
unsigned short var_13 = (unsigned short)19794;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
