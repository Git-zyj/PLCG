#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23322;
unsigned short var_2 = (unsigned short)12742;
int var_3 = -1529036419;
short var_5 = (short)3710;
long long int var_6 = -4256806650412405804LL;
short var_7 = (short)-5218;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 9465852681346641908ULL;
signed char var_11 = (signed char)-78;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-2239;
signed char var_14 = (signed char)-3;
int zero = 0;
long long int var_15 = 2924926589167598544LL;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-4882;
long long int var_18 = -6659774960710667974LL;
int var_19 = 2089062715;
long long int var_20 = -3067300200055340641LL;
signed char var_21 = (signed char)-127;
unsigned long long int arr_0 [19] ;
int arr_1 [19] [19] ;
long long int arr_3 [20] ;
int arr_5 [20] [20] ;
unsigned long long int arr_9 [20] [20] ;
short arr_10 [20] ;
signed char arr_2 [19] ;
signed char arr_7 [20] [20] ;
long long int arr_12 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2885840429816180437ULL : 16250539962341481814ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? -854226902 : -417808584;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 9188827147844124984LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 345102224;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 10156671299310649614ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (short)-23530;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)83 : (signed char)126;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = -6588960998191839701LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
