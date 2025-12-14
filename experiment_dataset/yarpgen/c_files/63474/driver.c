#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30415;
unsigned long long int var_3 = 1994475935489958221ULL;
int var_4 = 1934841145;
int var_5 = -1501730968;
int var_7 = 1587647236;
int var_8 = 530917568;
signed char var_10 = (signed char)-111;
int var_12 = 1349788929;
short var_17 = (short)-18948;
unsigned char var_18 = (unsigned char)205;
signed char var_19 = (signed char)89;
int zero = 0;
unsigned short var_20 = (unsigned short)1493;
unsigned short var_21 = (unsigned short)14633;
long long int var_22 = -8833531986710323135LL;
short var_23 = (short)31659;
int var_24 = -1728228904;
int var_25 = -567497555;
unsigned short arr_0 [19] ;
long long int arr_1 [19] [19] ;
int arr_2 [19] ;
short arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)56847;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = -5318743920480762349LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 218968398;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-20224 : (short)-2958;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
