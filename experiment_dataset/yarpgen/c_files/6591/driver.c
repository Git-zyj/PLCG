#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)88;
long long int var_1 = -6281258681942551663LL;
unsigned short var_3 = (unsigned short)14284;
short var_4 = (short)25794;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)7488;
unsigned long long int var_8 = 5479235697821093597ULL;
int var_11 = 1984328688;
unsigned char var_14 = (unsigned char)126;
unsigned short var_15 = (unsigned short)43960;
unsigned char var_16 = (unsigned char)68;
unsigned char var_17 = (unsigned char)115;
long long int var_18 = -1785248333501180536LL;
unsigned char var_19 = (unsigned char)95;
int zero = 0;
unsigned long long int var_20 = 6694237131407917711ULL;
unsigned short var_21 = (unsigned short)9297;
unsigned long long int var_22 = 1199711762304852473ULL;
long long int var_23 = -469218289618870552LL;
short var_24 = (short)19389;
int var_25 = -1618522442;
unsigned long long int var_26 = 11848531046822147602ULL;
unsigned long long int var_27 = 11416849776766811250ULL;
unsigned long long int var_28 = 13688153139518277034ULL;
unsigned int var_29 = 200180852U;
signed char var_30 = (signed char)-53;
int var_31 = 1222324919;
short var_32 = (short)30695;
unsigned short var_33 = (unsigned short)47705;
unsigned char var_34 = (unsigned char)19;
unsigned char var_35 = (unsigned char)49;
long long int arr_1 [11] [11] ;
unsigned int arr_2 [11] [11] [11] ;
_Bool arr_3 [11] [11] [11] ;
unsigned long long int arr_8 [11] [11] [11] ;
long long int arr_17 [11] [11] ;
unsigned int arr_18 [11] ;
unsigned char arr_23 [25] ;
_Bool arr_24 [25] ;
unsigned short arr_25 [25] ;
unsigned int arr_26 [25] ;
_Bool arr_27 [25] ;
unsigned short arr_29 [25] ;
unsigned int arr_4 [11] [11] [11] ;
long long int arr_22 [11] ;
unsigned short arr_30 [25] ;
short arr_34 [25] ;
unsigned long long int arr_35 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = -994360735002451244LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 162518946U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 8492575749639203951ULL : 6229322814688476786ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = -2379855699253093286LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = 2811345599U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_25 [i_0] = (unsigned short)51214;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 274683578U : 2903764627U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = (unsigned short)18848;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2489914373U : 1764345102U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? -1293404556169831184LL : 4731181136951227925LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_30 [i_0] = (unsigned short)23735;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_34 [i_0] = (short)9589;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_35 [i_0] [i_1] = 11342810500558890248ULL;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
