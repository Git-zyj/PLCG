#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
unsigned long long int var_1 = 8414774372320697652ULL;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)207;
_Bool var_6 = (_Bool)1;
short var_11 = (short)28896;
unsigned long long int var_12 = 15470130012824840988ULL;
long long int var_14 = 2088482631710741516LL;
unsigned long long int var_15 = 11917925721837988115ULL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 8183463788867356698ULL;
unsigned short var_20 = (unsigned short)32536;
_Bool var_21 = (_Bool)1;
short var_22 = (short)4964;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 8650061362581260506ULL;
unsigned char arr_1 [24] ;
signed char arr_3 [24] ;
unsigned long long int arr_4 [24] [24] [24] ;
unsigned short arr_5 [24] [24] [24] [24] ;
unsigned short arr_6 [24] [24] [24] ;
unsigned char arr_7 [24] ;
long long int arr_8 [24] [24] [24] ;
unsigned int arr_9 [24] [24] [24] [24] ;
short arr_11 [24] [24] [24] [24] ;
_Bool arr_12 [24] [24] ;
long long int arr_19 [24] [24] [24] [24] [24] ;
unsigned short arr_20 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)106 : (signed char)-59;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 17149736073330842213ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned short)47203;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)44354 : (unsigned short)31803;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -789300580488834049LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 323206584U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)13869 : (short)-31939;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 3994865552840087997LL : 1194149697409205543LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)53744 : (unsigned short)11057;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
