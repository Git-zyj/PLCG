#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3740556723164343681LL;
_Bool var_1 = (_Bool)1;
int var_2 = -97474623;
signed char var_3 = (signed char)-76;
long long int var_4 = -598240915801162763LL;
long long int var_6 = -7986803770318702104LL;
unsigned short var_7 = (unsigned short)2076;
int var_8 = 933399950;
unsigned int var_11 = 3494425876U;
signed char var_12 = (signed char)12;
unsigned char var_13 = (unsigned char)71;
unsigned int var_14 = 3688473223U;
int var_15 = 203232354;
unsigned char var_16 = (unsigned char)61;
unsigned char var_17 = (unsigned char)209;
short var_18 = (short)15824;
int zero = 0;
int var_19 = 1371647755;
long long int var_20 = 5432648647348824567LL;
short var_21 = (short)12107;
unsigned long long int var_22 = 9693100700481358145ULL;
signed char var_23 = (signed char)-77;
unsigned char var_24 = (unsigned char)8;
signed char var_25 = (signed char)-5;
_Bool var_26 = (_Bool)0;
unsigned short var_27 = (unsigned short)61643;
unsigned int var_28 = 2454444621U;
unsigned int var_29 = 3177877123U;
long long int var_30 = 1646693092493452211LL;
unsigned int arr_0 [12] ;
_Bool arr_1 [12] ;
short arr_2 [12] ;
unsigned short arr_3 [12] ;
signed char arr_4 [12] [12] ;
unsigned char arr_5 [12] ;
unsigned char arr_6 [12] [12] [12] ;
unsigned long long int arr_8 [12] [12] [12] [12] ;
unsigned int arr_9 [12] [12] [12] [12] ;
unsigned long long int arr_10 [10] [10] ;
int arr_14 [10] [10] ;
signed char arr_16 [10] ;
_Bool arr_19 [10] ;
signed char arr_17 [10] ;
unsigned char arr_21 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 3153748185U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-29174;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)34434;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 6343679175684101907ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 1487776368U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = 15424300958190158092ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = -974806171;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_21 [i_0] = (unsigned char)88;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
