#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)3;
short var_4 = (short)-18058;
int var_6 = 1527348735;
unsigned char var_9 = (unsigned char)186;
unsigned short var_14 = (unsigned short)55176;
int var_18 = -1577337304;
int zero = 0;
unsigned long long int var_19 = 2410498152739177998ULL;
unsigned long long int var_20 = 3409533917957068323ULL;
unsigned long long int var_21 = 1471105710615693405ULL;
unsigned long long int var_22 = 16757171198153261354ULL;
unsigned char var_23 = (unsigned char)76;
long long int var_24 = 5257621397264204956LL;
int var_25 = 2057996983;
signed char var_26 = (signed char)-99;
long long int var_27 = 8285805807940506799LL;
_Bool arr_0 [24] ;
long long int arr_1 [24] [24] ;
signed char arr_5 [24] ;
int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = -472100585027687346LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -1024838967;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
