#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-53;
signed char var_1 = (signed char)-94;
signed char var_2 = (signed char)118;
unsigned short var_3 = (unsigned short)36005;
short var_4 = (short)10182;
unsigned char var_5 = (unsigned char)88;
long long int var_6 = -8136842956983208668LL;
signed char var_7 = (signed char)100;
signed char var_8 = (signed char)-31;
unsigned short var_13 = (unsigned short)28581;
unsigned int var_14 = 677074000U;
int zero = 0;
unsigned short var_15 = (unsigned short)52325;
unsigned int var_16 = 1324183559U;
unsigned char var_17 = (unsigned char)182;
unsigned char var_18 = (unsigned char)36;
_Bool var_19 = (_Bool)1;
long long int var_20 = 8251519018209666399LL;
unsigned char var_21 = (unsigned char)96;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)99;
int var_24 = -170984636;
long long int arr_0 [20] [20] ;
long long int arr_1 [20] ;
unsigned int arr_2 [20] ;
unsigned short arr_4 [20] [20] [20] ;
unsigned long long int arr_5 [20] [20] [20] [20] ;
signed char arr_6 [20] [20] [20] [20] ;
long long int arr_9 [19] [19] ;
long long int arr_12 [19] [19] ;
short arr_7 [20] ;
unsigned char arr_14 [19] [19] ;
int arr_15 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 4775607434804370812LL : 3304991422381787466LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -4351494531607782586LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 1914055092U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)31919 : (unsigned short)50641;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 7871122493054767937ULL : 10491885079246598506ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = -6401424424129364414LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = -8250251861004822327LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-28800 : (short)-15333;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = 145353502;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
