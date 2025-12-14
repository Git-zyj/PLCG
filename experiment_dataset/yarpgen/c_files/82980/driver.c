#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2035685684;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)106;
long long int var_13 = 1114700965009868119LL;
unsigned char var_14 = (unsigned char)168;
long long int var_15 = -2504593613937991797LL;
int zero = 0;
unsigned int var_17 = 45652807U;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)124;
unsigned int var_20 = 2433059302U;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-92;
signed char var_23 = (signed char)-116;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
int var_26 = -666898118;
long long int var_27 = -2157179564079653362LL;
unsigned short var_28 = (unsigned short)36019;
unsigned long long int var_29 = 5820167060404096016ULL;
unsigned int var_30 = 3996591749U;
unsigned int var_31 = 2945584245U;
long long int arr_0 [22] [22] ;
long long int arr_2 [22] ;
int arr_3 [22] [22] ;
unsigned char arr_5 [22] [22] [22] ;
unsigned long long int arr_12 [22] [22] [22] ;
signed char arr_13 [22] ;
int arr_15 [22] [22] ;
short arr_21 [22] [22] ;
unsigned int arr_4 [22] ;
long long int arr_11 [22] ;
_Bool arr_19 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 821012577938341725LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 612413512531363042LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -1301177515;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 13908682969024738307ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = 1330626955;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = (short)27463;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 3748154739U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = -6642652789179155824LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
