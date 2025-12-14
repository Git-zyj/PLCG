#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28797;
short var_3 = (short)4110;
short var_4 = (short)5102;
long long int var_5 = -8126172737165485120LL;
unsigned short var_6 = (unsigned short)36993;
short var_7 = (short)27907;
long long int var_8 = 2550024837393081422LL;
unsigned short var_9 = (unsigned short)40023;
unsigned short var_10 = (unsigned short)10832;
short var_11 = (short)-30538;
long long int var_14 = 4841886053334404704LL;
long long int var_16 = -6361731024344419658LL;
int zero = 0;
unsigned short var_18 = (unsigned short)62152;
short var_19 = (short)-26004;
unsigned short var_20 = (unsigned short)5876;
long long int var_21 = 310546786093172297LL;
long long int var_22 = -3167515328657891903LL;
short var_23 = (short)-7311;
short var_24 = (short)-13915;
long long int var_25 = 589140122178612084LL;
long long int var_26 = 3064350586208208415LL;
short var_27 = (short)8821;
unsigned short var_28 = (unsigned short)41481;
short var_29 = (short)29037;
short var_30 = (short)25238;
unsigned short var_31 = (unsigned short)16956;
unsigned short var_32 = (unsigned short)23882;
unsigned short var_33 = (unsigned short)53603;
long long int arr_0 [24] ;
long long int arr_1 [24] ;
short arr_4 [14] [14] ;
short arr_5 [14] [14] ;
unsigned short arr_6 [14] ;
long long int arr_8 [14] ;
unsigned short arr_9 [14] [14] [14] [14] ;
unsigned short arr_10 [14] [14] [14] [14] ;
long long int arr_12 [14] [14] [14] ;
long long int arr_17 [11] ;
unsigned short arr_18 [11] ;
long long int arr_3 [24] [24] ;
long long int arr_15 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -3843276273212822884LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 7520404037354337811LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (short)12188;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-21627;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned short)52478;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 4577279848605219729LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)22317;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)53178;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -8401761279695054972LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = 778967118483535217LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = (unsigned short)26524;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 8096170231075141269LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = 8355203757798786948LL;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
