#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1452994050;
short var_1 = (short)5787;
unsigned char var_2 = (unsigned char)121;
unsigned short var_3 = (unsigned short)15400;
signed char var_4 = (signed char)-107;
unsigned long long int var_5 = 5158943719176539064ULL;
_Bool var_6 = (_Bool)1;
short var_7 = (short)20083;
_Bool var_8 = (_Bool)1;
long long int var_10 = -8754639984199879607LL;
int zero = 0;
unsigned char var_11 = (unsigned char)76;
unsigned short var_12 = (unsigned short)39603;
int var_13 = 171276282;
unsigned int var_14 = 3833487326U;
int var_15 = -1776066191;
unsigned int var_16 = 2844210674U;
unsigned short var_17 = (unsigned short)30730;
unsigned short var_18 = (unsigned short)32829;
int arr_0 [19] [19] ;
signed char arr_1 [19] ;
unsigned int arr_2 [19] ;
unsigned short arr_3 [19] ;
signed char arr_6 [10] [10] ;
signed char arr_7 [10] ;
unsigned int arr_4 [19] [19] ;
unsigned short arr_5 [19] ;
unsigned char arr_8 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 1593792296;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 1342610778U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)26471;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 1343166119U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned short)15105;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)116;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
