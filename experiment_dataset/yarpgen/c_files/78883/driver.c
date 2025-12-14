#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 619120726825992273ULL;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
int var_4 = 2090870702;
unsigned char var_5 = (unsigned char)31;
int var_6 = 1943871937;
long long int var_7 = 763343598926929769LL;
int var_8 = 139969652;
unsigned long long int var_9 = 7294852496081914675ULL;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-18305;
int zero = 0;
unsigned short var_12 = (unsigned short)27;
int var_13 = 2069474552;
int var_14 = -1143026940;
unsigned char var_15 = (unsigned char)189;
short var_16 = (short)16384;
short var_17 = (short)15923;
long long int var_18 = 5950628856185381127LL;
unsigned short var_19 = (unsigned short)64856;
long long int var_20 = -7662521851680327551LL;
unsigned short var_21 = (unsigned short)53271;
unsigned int var_22 = 1512777990U;
short var_23 = (short)13912;
short var_24 = (short)-13474;
unsigned char var_25 = (unsigned char)224;
short var_26 = (short)70;
short var_27 = (short)2327;
unsigned int arr_9 [12] [12] ;
long long int arr_10 [12] [12] [12] [12] [12] ;
int arr_13 [19] ;
unsigned char arr_14 [19] [19] ;
_Bool arr_16 [17] [17] ;
unsigned char arr_17 [17] ;
unsigned short arr_18 [16] ;
long long int arr_21 [16] [16] ;
short arr_3 [12] [12] ;
int arr_12 [12] ;
int arr_26 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 1153634140U : 3172017581U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -2445529022899938465LL : -1263816478868305179LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = -921985869;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = (unsigned short)54859;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = 4073915445410407110LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-1678;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = -337165613;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_26 [i_0] = -1037704437;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
