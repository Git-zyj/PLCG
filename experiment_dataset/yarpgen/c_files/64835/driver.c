#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)1;
signed char var_2 = (signed char)-29;
unsigned long long int var_3 = 11927970039373470577ULL;
_Bool var_4 = (_Bool)1;
int var_5 = 277564981;
long long int var_7 = -8214060215088013607LL;
unsigned int var_8 = 2983778250U;
unsigned int var_10 = 1212530181U;
short var_12 = (short)-3859;
int zero = 0;
long long int var_15 = 338375835511984167LL;
unsigned long long int var_16 = 18337271565829133982ULL;
signed char var_17 = (signed char)113;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
int var_20 = 896007259;
short var_21 = (short)-29813;
int arr_1 [25] ;
long long int arr_2 [25] [25] ;
int arr_4 [25] ;
unsigned long long int arr_5 [25] [25] ;
int arr_7 [25] [25] [25] [25] ;
long long int arr_8 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1542345507;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 1555752685261157454LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 2127191365;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 4120746592147135795ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 1030763334;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = -4262098915154338213LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
