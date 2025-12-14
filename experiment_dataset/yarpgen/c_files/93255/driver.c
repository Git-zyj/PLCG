#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36367;
long long int var_3 = 2679962937386674087LL;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)240;
_Bool var_6 = (_Bool)1;
long long int var_9 = 7023173226872371881LL;
int zero = 0;
long long int var_12 = 8490774738583531911LL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 1344824986111869363ULL;
unsigned char var_15 = (unsigned char)235;
unsigned long long int var_16 = 6425800735075315402ULL;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2119280857U;
unsigned long long int var_19 = 3360385904610896234ULL;
_Bool arr_1 [12] ;
unsigned int arr_2 [12] ;
signed char arr_9 [12] [12] [12] ;
unsigned long long int arr_4 [12] [12] ;
unsigned int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 271281148U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 4526910257943660824ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 3851081215U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
