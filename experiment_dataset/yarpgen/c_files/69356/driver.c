#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 2444324158977853320ULL;
unsigned char var_2 = (unsigned char)103;
unsigned short var_3 = (unsigned short)63793;
unsigned short var_4 = (unsigned short)55514;
int var_5 = 1872344460;
unsigned short var_6 = (unsigned short)26883;
unsigned char var_7 = (unsigned char)99;
short var_8 = (short)-27901;
signed char var_9 = (signed char)-114;
unsigned char var_10 = (unsigned char)207;
int zero = 0;
unsigned int var_11 = 2555711777U;
signed char var_12 = (signed char)-98;
int var_13 = 306219757;
signed char var_14 = (signed char)60;
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
