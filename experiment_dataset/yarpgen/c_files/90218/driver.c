#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 122901525;
long long int var_1 = 692738712276890097LL;
_Bool var_2 = (_Bool)1;
short var_3 = (short)32671;
unsigned short var_4 = (unsigned short)64717;
unsigned int var_5 = 3743698639U;
unsigned int var_6 = 2195162361U;
unsigned short var_7 = (unsigned short)46897;
long long int var_8 = 716910617130828064LL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)207;
int var_11 = 378899557;
unsigned char var_12 = (unsigned char)77;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)178;
int zero = 0;
long long int var_15 = -5266025155840155249LL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)96;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-10232;
int var_21 = 2106624454;
signed char var_22 = (signed char)-98;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)255;
_Bool var_25 = (_Bool)0;
long long int var_26 = 5449522754124354852LL;
unsigned char var_27 = (unsigned char)26;
_Bool var_28 = (_Bool)0;
unsigned long long int var_29 = 7066434110661301549ULL;
_Bool var_30 = (_Bool)0;
int var_31 = 2030931408;
unsigned short var_32 = (unsigned short)50389;
unsigned short var_33 = (unsigned short)24622;
long long int var_34 = -6134730072553512418LL;
unsigned long long int var_35 = 16705597891967677525ULL;
int arr_6 [10] [10] [10] [10] ;
short arr_7 [10] ;
long long int arr_8 [10] ;
long long int arr_17 [21] [21] [21] ;
unsigned int arr_25 [21] [21] ;
int arr_26 [21] [21] [21] [21] ;
int arr_35 [11] ;
long long int arr_36 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -1150059286 : 625329372;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (short)30277;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = -2428178425673360358LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 5362144089558895971LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? 3944023649U : 1971217394U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 138093241 : -1092347814;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_35 [i_0] = -645024426;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_36 [i_0] = 6595927029446295811LL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_36 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
