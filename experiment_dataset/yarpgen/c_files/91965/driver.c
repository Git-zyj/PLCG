#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)31;
unsigned char var_2 = (unsigned char)220;
unsigned long long int var_3 = 13902130408695765007ULL;
unsigned long long int var_4 = 2693422870104525557ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2731368998U;
int var_7 = -925919906;
signed char var_8 = (signed char)-120;
short var_9 = (short)-5905;
short var_10 = (short)-32207;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 4654925644660374732ULL;
unsigned short var_16 = (unsigned short)1920;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-47;
unsigned char var_21 = (unsigned char)254;
long long int var_22 = -3149809444912732802LL;
long long int var_23 = -4115621419851212604LL;
unsigned long long int var_24 = 15637579258054665000ULL;
signed char var_25 = (signed char)-1;
unsigned char var_26 = (unsigned char)35;
int var_27 = -225766699;
int var_28 = 1235647466;
unsigned int var_29 = 2924766351U;
unsigned long long int var_30 = 18039713443564356063ULL;
unsigned int var_31 = 1841078598U;
signed char var_32 = (signed char)5;
unsigned int var_33 = 821179035U;
signed char var_34 = (signed char)84;
unsigned int var_35 = 227451706U;
unsigned int var_36 = 2820296023U;
long long int arr_0 [17] ;
unsigned int arr_1 [17] ;
signed char arr_3 [17] [17] [17] ;
unsigned int arr_6 [17] [17] [17] ;
signed char arr_7 [17] [17] [17] ;
unsigned short arr_9 [17] [17] ;
unsigned long long int arr_10 [17] ;
unsigned char arr_13 [17] [17] [17] [17] ;
unsigned char arr_14 [17] ;
signed char arr_15 [17] [17] [17] ;
long long int arr_21 [17] [17] ;
signed char arr_4 [17] ;
long long int arr_8 [17] [17] ;
unsigned char arr_17 [17] ;
_Bool arr_22 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -1733525592202310718LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 319391248U : 1266459517U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2288430719U : 188831849U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)29030;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 1327439354053982734ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)64 : (signed char)90;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_21 [i_0] [i_1] = -4489006114177686205LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)8 : (signed char)36;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? -7035683171349837523LL : -873771729198168223LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned char)46 : (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
