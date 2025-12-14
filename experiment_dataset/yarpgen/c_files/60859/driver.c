#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-68;
unsigned long long int var_8 = 15622881198229055094ULL;
unsigned char var_10 = (unsigned char)152;
int var_12 = 187140928;
signed char var_13 = (signed char)121;
signed char var_15 = (signed char)-35;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)31436;
unsigned char var_19 = (unsigned char)174;
short var_20 = (short)-5662;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-4244;
unsigned long long int var_23 = 14604115806328718463ULL;
signed char var_24 = (signed char)-61;
int var_25 = 1046728455;
unsigned char var_26 = (unsigned char)80;
long long int var_27 = -6440467200490568166LL;
_Bool var_28 = (_Bool)0;
unsigned long long int var_29 = 8476966372562490391ULL;
unsigned long long int arr_1 [19] ;
unsigned long long int arr_2 [19] ;
short arr_3 [19] [19] ;
unsigned int arr_5 [19] [19] [19] ;
long long int arr_7 [19] [19] [19] ;
signed char arr_9 [19] [19] [19] [19] ;
signed char arr_12 [19] ;
int arr_16 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 8335303926566168558ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 10515708931631580039ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-10780;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1484878077U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -2116720646853312803LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? -1753919293 : -1722522101;
}

void checksum() {
    hash(&seed, var_18);
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
