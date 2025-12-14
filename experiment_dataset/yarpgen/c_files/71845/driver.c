#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-13799;
int zero = 0;
signed char var_19 = (signed char)-48;
unsigned int var_20 = 2970953588U;
unsigned int var_21 = 523397248U;
unsigned char var_22 = (unsigned char)118;
unsigned short var_23 = (unsigned short)50910;
long long int var_24 = -8658430342208049922LL;
long long int var_25 = -6778429238431342658LL;
signed char var_26 = (signed char)115;
unsigned int var_27 = 3236034863U;
long long int var_28 = 497080977073833416LL;
unsigned char var_29 = (unsigned char)136;
unsigned char var_30 = (unsigned char)33;
unsigned short var_31 = (unsigned short)22883;
long long int var_32 = -4041930340428549301LL;
int var_33 = -496504901;
_Bool var_34 = (_Bool)0;
long long int var_35 = 7261332982557273301LL;
unsigned short var_36 = (unsigned short)7497;
int var_37 = -915310017;
unsigned short var_38 = (unsigned short)29729;
unsigned long long int var_39 = 11124745844103468002ULL;
long long int arr_2 [20] ;
unsigned short arr_20 [15] [15] [15] [15] ;
signed char arr_24 [15] [15] [15] [15] [15] ;
unsigned int arr_25 [15] ;
signed char arr_31 [15] [15] [15] ;
_Bool arr_34 [15] ;
unsigned char arr_35 [15] ;
unsigned int arr_43 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 781951876928046828LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (unsigned short)50124;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = 2863480965U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_34 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_35 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_43 [i_0] = 1544466508U;
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_43 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
