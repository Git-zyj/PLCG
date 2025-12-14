#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)3533;
short var_4 = (short)4902;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3687036377U;
signed char var_10 = (signed char)81;
unsigned short var_11 = (unsigned short)55385;
int zero = 0;
unsigned char var_16 = (unsigned char)111;
short var_17 = (short)-4146;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-15848;
unsigned short var_20 = (unsigned short)62640;
unsigned char var_21 = (unsigned char)237;
int var_22 = 1413653277;
short var_23 = (short)-26334;
unsigned int var_24 = 1789652135U;
_Bool arr_1 [10] [10] ;
unsigned long long int arr_2 [10] [10] ;
short arr_3 [17] ;
int arr_5 [17] ;
unsigned int arr_8 [25] ;
signed char arr_10 [25] [25] ;
long long int arr_11 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 16066843433238705758ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)5138;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 464239358;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 1969032739U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = -2753277914027525739LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
