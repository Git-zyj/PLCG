#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54810;
long long int var_3 = 2534935628490196784LL;
long long int var_4 = 6573732267162582545LL;
unsigned int var_5 = 2459866243U;
signed char var_7 = (signed char)-125;
short var_8 = (short)32565;
int zero = 0;
short var_10 = (short)14548;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1697473038U;
_Bool var_13 = (_Bool)1;
unsigned int arr_0 [22] ;
signed char arr_1 [22] ;
signed char arr_2 [22] [22] ;
unsigned int arr_3 [22] ;
long long int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 3805856711U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 718691203U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 4057586142265578213LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
