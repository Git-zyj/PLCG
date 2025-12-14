#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)61902;
unsigned long long int var_5 = 3319407396616551278ULL;
unsigned char var_7 = (unsigned char)18;
unsigned short var_9 = (unsigned short)10200;
int zero = 0;
int var_11 = 476092259;
long long int var_12 = 5787890598744860052LL;
unsigned short var_13 = (unsigned short)33648;
unsigned long long int var_14 = 848718769856189481ULL;
signed char var_15 = (signed char)-83;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int var_18 = -1998909200;
signed char var_19 = (signed char)-111;
unsigned char var_20 = (unsigned char)54;
unsigned long long int var_21 = 2885992912324433816ULL;
signed char var_22 = (signed char)120;
unsigned int arr_1 [25] ;
unsigned int arr_4 [25] [25] [25] ;
_Bool arr_5 [25] ;
unsigned int arr_6 [25] [25] [25] ;
signed char arr_7 [25] [25] [25] ;
int arr_8 [25] [25] [25] [25] ;
unsigned char arr_13 [17] ;
long long int arr_14 [17] ;
unsigned short arr_17 [17] [17] [17] [17] [17] [17] ;
unsigned int arr_31 [16] [16] ;
signed char arr_32 [16] [16] [16] [16] [16] [16] ;
int arr_19 [17] ;
unsigned short arr_20 [17] [17] [17] ;
unsigned short arr_21 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 4018169912U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2289387823U : 1196281616U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3939286269U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -870788990;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = -666854722133210219LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)1677;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_31 [i_0] [i_1] = 2526969945U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = 1161910084;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)3678;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = (unsigned short)54072;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
