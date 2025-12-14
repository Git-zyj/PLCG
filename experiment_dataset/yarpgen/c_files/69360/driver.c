#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)167;
int var_1 = 1756354694;
unsigned char var_3 = (unsigned char)202;
unsigned int var_4 = 1613297253U;
signed char var_6 = (signed char)-33;
signed char var_7 = (signed char)-88;
unsigned short var_8 = (unsigned short)16928;
long long int var_10 = 8406814792192848614LL;
long long int var_11 = -729864039183495284LL;
short var_12 = (short)-13608;
int var_13 = -939707217;
unsigned int var_14 = 1573156277U;
unsigned short var_15 = (unsigned short)8409;
short var_17 = (short)2067;
long long int var_18 = 97287800407113427LL;
unsigned long long int var_19 = 1645540829080555948ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 3715973701714715238ULL;
unsigned int var_22 = 2353174744U;
short var_23 = (short)15936;
long long int var_24 = 8342804799707452077LL;
unsigned long long int var_25 = 6404758050022996767ULL;
long long int var_26 = 2340851178099776566LL;
long long int arr_1 [23] [23] ;
unsigned char arr_2 [23] ;
unsigned short arr_3 [23] [23] [23] ;
unsigned char arr_5 [23] [23] [23] ;
int arr_6 [23] [23] [23] [23] ;
short arr_8 [23] [23] [23] [23] ;
unsigned char arr_9 [23] ;
unsigned long long int arr_11 [23] [23] [23] ;
long long int arr_12 [23] ;
unsigned int arr_13 [23] [23] [23] [23] ;
unsigned short arr_14 [23] [23] [23] ;
signed char arr_16 [23] [23] [23] [23] [23] ;
signed char arr_17 [15] ;
int arr_18 [15] ;
long long int arr_19 [15] ;
unsigned char arr_20 [15] [15] [15] ;
unsigned int arr_22 [15] [15] ;
short arr_10 [23] [23] [23] [23] ;
unsigned long long int arr_23 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = -7166819975914833464LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)58471;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)33 : (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 216800760;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)20264;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 3300591610753095065ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = -4171495953804521662LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 3777845561U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)21188 : (unsigned short)9447;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (signed char)16 : (signed char)-77;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = 718075940;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = -3102218430047212433LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_22 [i_0] [i_1] = 3943098031U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-3932 : (short)-1156;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = 8368272636477573236ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
