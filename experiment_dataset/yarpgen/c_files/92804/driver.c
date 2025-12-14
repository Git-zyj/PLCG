#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-76;
long long int var_2 = 7214891775120637146LL;
long long int var_6 = -1518066395251158401LL;
signed char var_7 = (signed char)99;
long long int var_13 = 4880709409620832864LL;
unsigned char var_15 = (unsigned char)103;
int zero = 0;
unsigned short var_19 = (unsigned short)55036;
unsigned char var_20 = (unsigned char)18;
unsigned int var_21 = 434061508U;
unsigned long long int var_22 = 5989472554802797803ULL;
short var_23 = (short)-12952;
_Bool var_24 = (_Bool)1;
long long int var_25 = 4499538460142413134LL;
unsigned short var_26 = (unsigned short)61711;
unsigned long long int var_27 = 4554308580539565863ULL;
_Bool arr_0 [14] ;
_Bool arr_1 [14] ;
unsigned long long int arr_3 [14] [14] [14] ;
unsigned char arr_4 [14] [14] [14] [14] ;
int arr_5 [14] [14] ;
unsigned char arr_8 [11] [11] ;
unsigned char arr_9 [11] ;
unsigned long long int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 18254976668390380110ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -1068500435 : -75034215;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 14735338582011870651ULL : 5229505866761315186ULL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
