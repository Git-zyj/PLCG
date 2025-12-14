#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)106;
short var_3 = (short)-21035;
short var_4 = (short)8787;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)29009;
unsigned long long int var_7 = 7818418942324761469ULL;
unsigned long long int var_8 = 6952294874208054275ULL;
unsigned int var_10 = 589871499U;
signed char var_11 = (signed char)-19;
signed char var_12 = (signed char)54;
int zero = 0;
unsigned int var_15 = 3035542786U;
signed char var_16 = (signed char)28;
unsigned long long int var_17 = 11013469857403347565ULL;
unsigned int var_18 = 3597159557U;
signed char var_19 = (signed char)-87;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 2942973961771150916ULL;
_Bool var_22 = (_Bool)0;
unsigned char arr_0 [18] ;
_Bool arr_1 [18] [18] ;
unsigned long long int arr_4 [10] ;
unsigned int arr_5 [10] ;
short arr_6 [10] ;
unsigned long long int arr_7 [10] [10] [10] ;
unsigned char arr_9 [10] [10] [10] ;
unsigned long long int arr_10 [10] [10] [10] ;
unsigned char arr_11 [10] [10] ;
unsigned short arr_2 [18] ;
unsigned short arr_3 [18] ;
unsigned long long int arr_12 [10] [10] ;
short arr_13 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 3628310589993209247ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 2647489539U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (short)-7216;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 16078094058609387700ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 3907358005068696242ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)15306;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)6587;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = 9349090883519856911ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (short)22237;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
