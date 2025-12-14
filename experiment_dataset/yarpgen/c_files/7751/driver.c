#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 72159349;
long long int var_1 = 4234179655787588280LL;
unsigned int var_2 = 1065771753U;
unsigned short var_5 = (unsigned short)30590;
unsigned short var_6 = (unsigned short)48894;
_Bool var_11 = (_Bool)1;
short var_12 = (short)10792;
int var_13 = -1762862553;
int var_14 = 1657110074;
unsigned char var_17 = (unsigned char)132;
int zero = 0;
int var_19 = 1040974192;
long long int var_20 = -8782416411150577480LL;
_Bool var_21 = (_Bool)0;
long long int var_22 = 6732203815597080272LL;
unsigned long long int var_23 = 4870698061935690878ULL;
long long int var_24 = 3791508598827041593LL;
unsigned int var_25 = 477184926U;
int var_26 = 2043956632;
long long int var_27 = 8100011762210322046LL;
unsigned int var_28 = 860000679U;
long long int var_29 = 3704272475143118083LL;
int arr_2 [23] [23] ;
unsigned char arr_5 [23] ;
_Bool arr_3 [23] ;
short arr_17 [23] [23] [23] [23] [23] ;
unsigned short arr_18 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -385817783;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)18266;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (unsigned short)30978;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
