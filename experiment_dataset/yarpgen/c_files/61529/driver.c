#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5031075598314374803ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 8352047597049686296ULL;
int var_6 = 2011850515;
unsigned short var_8 = (unsigned short)19873;
signed char var_9 = (signed char)-126;
unsigned long long int var_11 = 11295411346172855810ULL;
signed char var_12 = (signed char)-54;
int zero = 0;
unsigned short var_14 = (unsigned short)56120;
long long int var_15 = 4612396009449689720LL;
unsigned long long int var_16 = 6055080579697785860ULL;
unsigned short var_17 = (unsigned short)52502;
unsigned long long int var_18 = 11000415258712727914ULL;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 16397534773566898260ULL;
unsigned long long int var_22 = 15925846435134167878ULL;
unsigned short var_23 = (unsigned short)15576;
int arr_2 [18] ;
int arr_5 [18] [18] ;
unsigned long long int arr_8 [18] [18] ;
unsigned short arr_9 [18] ;
short arr_3 [18] ;
unsigned short arr_11 [18] [18] [18] ;
unsigned int arr_15 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 516381247;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 964942501;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 15898611677549018877ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (unsigned short)48839;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)-21331;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)1381;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = 4280771691U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
