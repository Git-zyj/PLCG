#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-106;
short var_2 = (short)19861;
unsigned long long int var_3 = 6926936483195690902ULL;
_Bool var_8 = (_Bool)1;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-90;
int zero = 0;
unsigned short var_18 = (unsigned short)41146;
short var_19 = (short)-19972;
unsigned short var_20 = (unsigned short)31654;
unsigned short arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)26024;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
