#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35872;
signed char var_1 = (signed char)-29;
unsigned short var_4 = (unsigned short)35426;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)55932;
signed char var_9 = (signed char)4;
unsigned short var_12 = (unsigned short)58892;
unsigned char var_14 = (unsigned char)154;
int var_15 = 900277202;
unsigned long long int var_16 = 4413648791876341134ULL;
unsigned short var_18 = (unsigned short)19865;
int zero = 0;
long long int var_20 = -7005048996084399675LL;
unsigned short var_21 = (unsigned short)31523;
long long int var_22 = -4950573776118239803LL;
int var_23 = -39174926;
unsigned int var_24 = 1996722467U;
unsigned int var_25 = 2103069716U;
signed char var_26 = (signed char)107;
signed char var_27 = (signed char)19;
short var_28 = (short)-24330;
_Bool var_29 = (_Bool)1;
long long int var_30 = -3298603132361872920LL;
int var_31 = 419533650;
unsigned short var_32 = (unsigned short)33517;
int var_33 = -38807822;
unsigned int var_34 = 948557740U;
short var_35 = (short)-11489;
short var_36 = (short)28689;
unsigned long long int var_37 = 12049014399117449063ULL;
_Bool var_38 = (_Bool)0;
int arr_0 [22] ;
short arr_1 [22] [22] ;
signed char arr_3 [17] ;
int arr_4 [17] ;
unsigned short arr_5 [17] ;
unsigned long long int arr_6 [17] ;
long long int arr_7 [17] [17] [17] ;
unsigned int arr_9 [17] ;
unsigned short arr_10 [17] [17] [17] ;
unsigned short arr_11 [17] [17] [17] ;
long long int arr_13 [17] ;
unsigned short arr_2 [22] ;
short arr_8 [17] [17] [17] ;
unsigned int arr_14 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -1231171307;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-18251;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 785354608;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned short)17789;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 18186070951557033320ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -437642264599398178LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 273322587U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)43703;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)60986;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = -1571579693452105125LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)58718;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)18078;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = 2318361671U;
}

void checksum() {
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
