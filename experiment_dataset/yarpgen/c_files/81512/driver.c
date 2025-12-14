#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)94;
unsigned short var_2 = (unsigned short)10380;
unsigned short var_3 = (unsigned short)818;
unsigned short var_4 = (unsigned short)44281;
short var_5 = (short)-18337;
unsigned int var_6 = 2896403887U;
unsigned int var_7 = 3064106352U;
int var_10 = 906008840;
unsigned int var_11 = 206015908U;
short var_12 = (short)9913;
unsigned char var_13 = (unsigned char)26;
int zero = 0;
unsigned int var_14 = 4162807083U;
unsigned int var_15 = 3408213304U;
unsigned short var_16 = (unsigned short)39856;
unsigned char var_17 = (unsigned char)144;
unsigned int var_18 = 534828526U;
unsigned int var_19 = 3680352892U;
unsigned int var_20 = 4084189656U;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2685501742U;
long long int var_23 = -1557766793065628146LL;
long long int var_24 = 781295675804937719LL;
short var_25 = (short)-4852;
long long int var_26 = -4527928457272232225LL;
unsigned short var_27 = (unsigned short)52220;
long long int arr_0 [22] ;
unsigned long long int arr_1 [22] ;
short arr_4 [21] ;
short arr_6 [21] ;
signed char arr_7 [11] ;
unsigned long long int arr_8 [11] ;
_Bool arr_13 [11] ;
short arr_2 [22] [22] ;
unsigned char arr_3 [22] ;
short arr_14 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 8310075545064248023LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 10192011952712536084ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)-4329;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (short)-14010;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 6891317084081143846ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (short)26755;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (short)-30963;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
