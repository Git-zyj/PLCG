#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-43;
unsigned long long int var_2 = 15307294910709486172ULL;
signed char var_3 = (signed char)-65;
long long int var_4 = 4852667918861971067LL;
unsigned int var_5 = 2893595420U;
unsigned long long int var_6 = 13249899917437122191ULL;
unsigned long long int var_7 = 750309009412290134ULL;
unsigned long long int var_8 = 9742894035465099536ULL;
unsigned char var_11 = (unsigned char)255;
int zero = 0;
unsigned short var_13 = (unsigned short)2702;
unsigned int var_14 = 2091430006U;
unsigned int var_15 = 2629087128U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
