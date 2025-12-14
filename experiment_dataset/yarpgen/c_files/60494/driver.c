#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -10492217;
int var_3 = 1281564097;
unsigned short var_5 = (unsigned short)41403;
unsigned short var_6 = (unsigned short)63776;
_Bool var_7 = (_Bool)1;
unsigned char var_11 = (unsigned char)46;
int zero = 0;
long long int var_12 = -903051770650947190LL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)5;
unsigned short var_15 = (unsigned short)39475;
signed char var_16 = (signed char)-58;
unsigned char var_17 = (unsigned char)226;
int var_18 = -1963830316;
signed char arr_0 [19] [19] ;
signed char arr_1 [19] ;
signed char arr_3 [12] ;
unsigned char arr_5 [12] ;
unsigned char arr_6 [12] ;
signed char arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (signed char)102;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
