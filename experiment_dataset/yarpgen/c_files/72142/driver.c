#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 962811346U;
unsigned int var_2 = 1857107400U;
short var_3 = (short)-27748;
_Bool var_4 = (_Bool)1;
int var_5 = -742104971;
long long int var_7 = 2920175916853175940LL;
short var_9 = (short)-23624;
unsigned int var_10 = 1546644234U;
unsigned int var_11 = 1597561441U;
_Bool var_13 = (_Bool)0;
long long int var_14 = 3500044834405889968LL;
unsigned char var_15 = (unsigned char)17;
short var_16 = (short)-28430;
int var_17 = -490660702;
int zero = 0;
unsigned long long int var_18 = 15852195662715992963ULL;
unsigned short var_19 = (unsigned short)1817;
unsigned int var_20 = 3679288484U;
long long int var_21 = -7395188273830049858LL;
long long int var_22 = -4296850798487503954LL;
int var_23 = 1337760440;
unsigned short var_24 = (unsigned short)1443;
signed char var_25 = (signed char)-118;
_Bool var_26 = (_Bool)0;
int var_27 = 1071136482;
int var_28 = 1463142844;
long long int var_29 = -9148491428383588860LL;
short var_30 = (short)-29564;
long long int var_31 = 3673745797942223610LL;
unsigned char var_32 = (unsigned char)32;
long long int arr_0 [17] ;
unsigned int arr_1 [17] [17] ;
int arr_3 [10] [10] ;
int arr_5 [10] ;
signed char arr_7 [10] [10] [10] ;
long long int arr_8 [10] ;
int arr_20 [10] [10] [10] [10] [10] ;
unsigned long long int arr_27 [10] [10] [10] [10] ;
signed char arr_31 [20] ;
unsigned char arr_32 [20] ;
signed char arr_33 [20] [20] ;
int arr_34 [20] ;
short arr_2 [17] [17] ;
long long int arr_6 [10] ;
long long int arr_10 [10] ;
int arr_30 [10] [10] [10] [10] [10] [10] [10] ;
int arr_35 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -398805248458873253LL : 292125543079353688LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 798918957U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = -1097027032;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -477235150;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = -3687077854974260134LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -1467559968 : -2138448955;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = 9431228402139299116ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_31 [i_0] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? (unsigned char)248 : (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_33 [i_0] [i_1] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_34 [i_0] = 566417442;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)25538 : (short)6388;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 1185310563766745374LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 6222612437222105919LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 931272081;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_35 [i_0] [i_1] = (i_1 % 2 == 0) ? 2086612255 : 1796505806;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
