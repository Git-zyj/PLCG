#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3253550644948109973ULL;
unsigned short var_4 = (unsigned short)18731;
signed char var_5 = (signed char)26;
unsigned long long int var_6 = 2836222999543726533ULL;
short var_7 = (short)-7832;
unsigned long long int var_8 = 16125013498328973171ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)212;
short var_11 = (short)23260;
signed char var_12 = (signed char)-98;
unsigned char arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)240 : (unsigned char)23;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
