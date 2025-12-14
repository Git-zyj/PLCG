#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)81;
long long int var_1 = -7608327483844342937LL;
int var_3 = 2025552760;
unsigned long long int var_4 = 3090854555600037867ULL;
unsigned char var_5 = (unsigned char)208;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3817748906U;
unsigned int var_9 = 2337372489U;
unsigned char var_10 = (unsigned char)155;
unsigned int var_12 = 3346870457U;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)17;
int var_15 = 996162736;
short var_16 = (short)4509;
unsigned char var_17 = (unsigned char)251;
signed char var_18 = (signed char)22;
unsigned char var_19 = (unsigned char)154;
int var_20 = 2032444655;
unsigned int var_21 = 4115041115U;
short var_22 = (short)-30437;
unsigned long long int var_23 = 13070704313399301708ULL;
unsigned long long int var_24 = 5863606152199397092ULL;
unsigned char var_25 = (unsigned char)209;
_Bool var_26 = (_Bool)1;
short var_27 = (short)-19858;
int var_28 = -1107125447;
_Bool var_29 = (_Bool)1;
unsigned long long int var_30 = 17016667767627230694ULL;
int arr_0 [22] [22] ;
short arr_1 [22] ;
long long int arr_2 [22] [22] ;
int arr_4 [22] [22] ;
short arr_5 [22] [22] [22] ;
unsigned int arr_9 [18] [18] [18] ;
unsigned int arr_12 [18] [18] ;
long long int arr_18 [22] ;
long long int arr_20 [22] ;
unsigned char arr_27 [22] [22] ;
unsigned int arr_28 [22] ;
unsigned char arr_13 [18] [18] [18] ;
unsigned char arr_31 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = -1968721410;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)27247;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 1859822868501339707LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = -1394588167;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)15532;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 4113654187U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = 4113834119U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = -6508842641943965769LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = -5144037281963918730LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_28 [i_0] = 2816538890U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)144 : (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (unsigned char)0 : (unsigned char)93;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
