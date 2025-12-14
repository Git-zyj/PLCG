#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)39810;
unsigned short var_9 = (unsigned short)31527;
unsigned char var_12 = (unsigned char)199;
unsigned int var_16 = 1704013215U;
int zero = 0;
unsigned char var_19 = (unsigned char)217;
unsigned char var_20 = (unsigned char)105;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)8988;
unsigned int var_23 = 1476812992U;
signed char var_24 = (signed char)115;
unsigned short var_25 = (unsigned short)31477;
unsigned short var_26 = (unsigned short)28323;
long long int var_27 = -7724977942288609054LL;
unsigned long long int var_28 = 7443637637507783262ULL;
unsigned char arr_1 [10] [10] ;
signed char arr_4 [10] [10] [10] ;
int arr_5 [10] [10] [10] ;
int arr_7 [10] [10] ;
long long int arr_9 [10] [10] [10] ;
unsigned int arr_19 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1016839188;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = -975227190;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 6564686461654764859LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = 2161671116U;
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
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
