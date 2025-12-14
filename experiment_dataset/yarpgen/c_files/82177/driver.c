#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)111;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-46;
unsigned int var_6 = 244558535U;
unsigned short var_8 = (unsigned short)45070;
int var_10 = 1423545508;
unsigned int var_11 = 745703236U;
unsigned long long int var_13 = 12033740436137929812ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 6150197595271056197ULL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-61;
void init() {
}

void checksum() {
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
