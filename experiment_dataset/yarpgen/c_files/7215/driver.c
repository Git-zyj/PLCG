#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)21;
unsigned short var_1 = (unsigned short)57579;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-6928;
unsigned char var_4 = (unsigned char)144;
unsigned long long int var_5 = 13458108275718118249ULL;
unsigned long long int var_6 = 8555565713993147377ULL;
signed char var_7 = (signed char)84;
unsigned short var_8 = (unsigned short)35631;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-62;
unsigned long long int var_11 = 12558731312557035050ULL;
unsigned long long int var_14 = 1631811096639968567ULL;
_Bool var_15 = (_Bool)0;
signed char var_17 = (signed char)-45;
int zero = 0;
short var_18 = (short)-7262;
unsigned long long int var_19 = 433247625214716224ULL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)30373;
int var_22 = 1425338924;
unsigned short var_23 = (unsigned short)20898;
int var_24 = -645534558;
unsigned long long int var_25 = 5652797460677850198ULL;
unsigned int var_26 = 3002934211U;
_Bool var_27 = (_Bool)1;
unsigned int var_28 = 1074723312U;
_Bool var_29 = (_Bool)1;
short var_30 = (short)-22198;
short var_31 = (short)4189;
short var_32 = (short)13244;
unsigned short var_33 = (unsigned short)53371;
signed char var_34 = (signed char)24;
short var_35 = (short)-3940;
int var_36 = 1582154190;
_Bool arr_0 [24] [24] ;
short arr_1 [24] [24] ;
short arr_2 [24] ;
long long int arr_4 [24] ;
unsigned char arr_5 [24] [24] [24] ;
long long int arr_7 [24] ;
_Bool arr_13 [17] [17] ;
unsigned short arr_17 [22] ;
unsigned int arr_20 [22] [22] ;
signed char arr_3 [24] ;
signed char arr_14 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)3834;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)9079;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -278391024702971494LL : 2453609236741747919LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 4267381287114780641LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (unsigned short)63545;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_20 [i_0] [i_1] = 1684480072U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)116 : (signed char)120;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
