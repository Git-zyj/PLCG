#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)34;
int var_3 = 1667573716;
unsigned long long int var_4 = 7329427238729431208ULL;
unsigned char var_5 = (unsigned char)209;
unsigned char var_6 = (unsigned char)12;
int var_7 = -866881014;
int var_10 = 1977731034;
int var_11 = -1181733528;
unsigned char var_14 = (unsigned char)142;
int zero = 0;
unsigned char var_15 = (unsigned char)251;
unsigned long long int var_16 = 10378358814970673619ULL;
int var_17 = 1921124504;
unsigned long long int var_18 = 11871137938329152648ULL;
unsigned char var_19 = (unsigned char)135;
int var_20 = 413508210;
int arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 363072500 : 515254134;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
