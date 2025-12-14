#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1848624874335104541ULL;
unsigned long long int var_3 = 13970063827969512924ULL;
signed char var_5 = (signed char)103;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)64666;
signed char var_8 = (signed char)45;
long long int var_10 = -7574142232347570297LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = 6758260793400914178LL;
unsigned char var_15 = (unsigned char)254;
signed char var_16 = (signed char)-107;
int zero = 0;
int var_19 = 1195073664;
unsigned short var_20 = (unsigned short)26594;
_Bool var_21 = (_Bool)1;
long long int var_22 = 4096457488533998982LL;
unsigned short var_23 = (unsigned short)64;
unsigned char var_24 = (unsigned char)83;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)46;
unsigned int var_27 = 394239383U;
unsigned long long int var_28 = 8325623655622596933ULL;
long long int var_29 = 2857045362777094098LL;
long long int var_30 = -5646952174801143281LL;
long long int var_31 = 4083216703367406900LL;
signed char var_32 = (signed char)62;
_Bool var_33 = (_Bool)1;
long long int var_34 = -922099080336726670LL;
int arr_1 [15] ;
unsigned long long int arr_3 [15] ;
_Bool arr_4 [15] ;
unsigned int arr_6 [15] [15] ;
unsigned short arr_9 [15] [15] [15] [15] ;
unsigned short arr_10 [15] [15] [15] [15] [15] [15] ;
unsigned long long int arr_21 [25] ;
short arr_22 [25] ;
_Bool arr_2 [15] [15] ;
unsigned char arr_12 [15] [15] [15] ;
unsigned char arr_13 [15] ;
unsigned int arr_18 [15] [15] ;
_Bool arr_23 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1640006668;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 5053045111788863068ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 1158619207U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)48569 : (unsigned short)20420;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)56002;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = 17443761310927849413ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = (short)15625;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)246 : (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)208 : (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = 3627453611U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
