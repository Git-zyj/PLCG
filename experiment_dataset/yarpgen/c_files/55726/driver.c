#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5898129309152386362ULL;
unsigned int var_3 = 70117604U;
unsigned long long int var_9 = 7479372926735840117ULL;
unsigned int var_15 = 1903243499U;
long long int var_18 = -723844388884275149LL;
int zero = 0;
unsigned short var_20 = (unsigned short)6010;
unsigned char var_21 = (unsigned char)26;
signed char var_22 = (signed char)-11;
unsigned char var_23 = (unsigned char)169;
signed char var_24 = (signed char)4;
signed char var_25 = (signed char)-5;
signed char arr_0 [18] [18] ;
short arr_2 [18] ;
unsigned int arr_3 [18] ;
signed char arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)4632;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 1842405383U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)117;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
