#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3054731492U;
unsigned short var_1 = (unsigned short)16614;
long long int var_2 = -8842986696710312030LL;
unsigned short var_3 = (unsigned short)58207;
unsigned short var_4 = (unsigned short)60363;
unsigned char var_5 = (unsigned char)192;
unsigned long long int var_6 = 957319576314397957ULL;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)20;
unsigned short var_9 = (unsigned short)57317;
unsigned long long int var_10 = 6456739282278454874ULL;
long long int var_11 = 4376051842459062609LL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 1073765947272388064ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-62;
unsigned char var_18 = (unsigned char)7;
long long int var_19 = -3068695546352100062LL;
long long int var_20 = 8272631371077437578LL;
unsigned short var_21 = (unsigned short)929;
int var_22 = 155418539;
unsigned int var_23 = 1179811462U;
unsigned long long int var_24 = 12587600250309598144ULL;
unsigned long long int arr_2 [17] ;
unsigned short arr_6 [18] ;
short arr_7 [18] ;
signed char arr_14 [18] ;
unsigned char arr_15 [18] [18] ;
int arr_18 [18] ;
long long int arr_19 [18] ;
int arr_20 [18] ;
_Bool arr_21 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 12640552768979446430ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned short)65321;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (short)-11631;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (signed char)-55;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = 953543379;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = 6055998083438327415LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = 758294793;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
