#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3023;
short var_2 = (short)13338;
long long int var_3 = 2442534430426070726LL;
unsigned short var_4 = (unsigned short)3837;
int var_5 = -345124728;
long long int var_6 = 5407350616755199861LL;
short var_7 = (short)-3367;
unsigned int var_8 = 1071955976U;
long long int var_9 = 2142246273849343788LL;
signed char var_10 = (signed char)97;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)193;
long long int var_15 = 1431860445907402658LL;
unsigned short var_16 = (unsigned short)32733;
signed char var_17 = (signed char)-85;
int zero = 0;
signed char var_18 = (signed char)-29;
signed char var_19 = (signed char)110;
signed char var_20 = (signed char)-78;
int var_21 = -1339160308;
long long int arr_1 [18] ;
_Bool arr_3 [18] [18] ;
unsigned short arr_5 [18] [18] ;
short arr_6 [18] ;
unsigned char arr_7 [18] ;
unsigned short arr_8 [18] [18] [18] ;
signed char arr_9 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -6230969909085944961LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)57339;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (short)16145;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)61891;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)83;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
