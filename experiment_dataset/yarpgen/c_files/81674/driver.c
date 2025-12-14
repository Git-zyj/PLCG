#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13857586869683196325ULL;
unsigned short var_3 = (unsigned short)8678;
int var_5 = -1178180360;
unsigned long long int var_6 = 5998245578068840699ULL;
unsigned char var_7 = (unsigned char)43;
signed char var_8 = (signed char)96;
int var_9 = 1472967408;
int zero = 0;
signed char var_10 = (signed char)-32;
unsigned short var_11 = (unsigned short)16964;
unsigned int var_12 = 811138160U;
unsigned int var_13 = 4238614484U;
signed char var_14 = (signed char)(-127 - 1);
_Bool var_15 = (_Bool)0;
short var_16 = (short)25778;
long long int var_17 = 6957759271805459953LL;
unsigned long long int var_18 = 13512837342443766738ULL;
int arr_1 [17] ;
long long int arr_3 [17] [17] [17] ;
unsigned long long int arr_4 [17] [17] ;
unsigned int arr_7 [17] [17] [17] [17] ;
unsigned long long int arr_10 [17] [17] [17] [17] [17] [17] ;
long long int arr_13 [22] ;
signed char arr_14 [22] ;
unsigned int arr_15 [22] [22] ;
unsigned long long int arr_16 [22] ;
unsigned short arr_17 [22] [22] [22] ;
unsigned long long int arr_18 [22] [22] [22] [22] ;
unsigned int arr_20 [22] ;
unsigned long long int arr_21 [22] [22] [22] [22] ;
signed char arr_22 [22] [22] [22] [22] ;
unsigned int arr_12 [17] ;
long long int arr_23 [22] [22] [22] ;
int arr_24 [22] ;
unsigned long long int arr_25 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -1996337276;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -2514444679183029171LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 11998909146361185128ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 3533152533U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3457123588721378862ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = -5606554193560237317LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = 1924937580U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = 12309018211447612424ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned short)43248;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 11135012431516220695ULL : 3748646553024290908ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = 3052474522U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 18232165714977690331ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 4186751285U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1027462860258459310LL : 2657763055381359113LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? -1653701813 : 687312991;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = 15760370230845006991ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
