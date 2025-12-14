#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40948;
long long int var_3 = 2491022016374523948LL;
int var_4 = -1927698413;
unsigned char var_6 = (unsigned char)176;
unsigned short var_7 = (unsigned short)19803;
int var_8 = 440944537;
short var_9 = (short)30680;
int zero = 0;
unsigned long long int var_10 = 5675294157297484429ULL;
unsigned short var_11 = (unsigned short)31910;
unsigned char var_12 = (unsigned char)99;
short var_13 = (short)5042;
long long int var_14 = 177867461200287614LL;
short var_15 = (short)31731;
unsigned char var_16 = (unsigned char)50;
short var_17 = (short)23973;
unsigned char var_18 = (unsigned char)193;
unsigned char var_19 = (unsigned char)100;
long long int arr_0 [11] ;
unsigned short arr_1 [11] ;
int arr_2 [11] ;
signed char arr_3 [11] ;
unsigned short arr_5 [11] ;
short arr_7 [11] [11] ;
signed char arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 5863118974071527160LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)13356;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1607741244 : -1331839802;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)42847;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (short)13621;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)56 : (signed char)31;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
