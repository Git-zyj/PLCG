#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)65;
long long int var_3 = -2075801039544908938LL;
unsigned short var_5 = (unsigned short)10200;
long long int var_6 = -7227529406310890033LL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)172;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_13 = 9133103739192620343LL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)13128;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-21060;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)10110;
int arr_0 [10] [10] ;
unsigned char arr_2 [11] ;
signed char arr_3 [11] ;
unsigned char arr_6 [11] ;
_Bool arr_7 [11] ;
signed char arr_8 [11] [11] ;
unsigned char arr_5 [11] ;
unsigned long long int arr_9 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 1274251542;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 8602005321889070376ULL : 3317232869005127291ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
