#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52794;
int var_1 = -51544216;
unsigned long long int var_2 = 17307121874694750836ULL;
unsigned char var_3 = (unsigned char)122;
signed char var_4 = (signed char)46;
unsigned short var_6 = (unsigned short)17679;
short var_7 = (short)-9241;
unsigned short var_8 = (unsigned short)31587;
unsigned short var_9 = (unsigned short)20880;
unsigned short var_10 = (unsigned short)3182;
unsigned int var_11 = 3444142604U;
unsigned int var_12 = 2070564590U;
short var_13 = (short)23018;
long long int var_14 = 5246162681482401716LL;
long long int var_15 = 4177214118194624810LL;
unsigned char var_16 = (unsigned char)25;
unsigned short var_17 = (unsigned short)37911;
int zero = 0;
unsigned int var_20 = 1577110586U;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)31615;
short var_23 = (short)-31493;
long long int var_24 = 3827963378235372936LL;
signed char var_25 = (signed char)-1;
long long int var_26 = -4677928198627711060LL;
short var_27 = (short)1115;
unsigned short var_28 = (unsigned short)57425;
long long int var_29 = 604589351897506534LL;
unsigned int var_30 = 928990516U;
_Bool arr_2 [18] ;
short arr_3 [18] ;
_Bool arr_4 [18] ;
unsigned short arr_5 [18] [18] [18] ;
unsigned int arr_6 [18] [18] [18] [18] ;
unsigned int arr_13 [14] ;
short arr_16 [14] ;
int arr_8 [18] [18] [18] ;
long long int arr_12 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)-12375;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)38055;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 3301148916U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = 3809077641U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (short)-27483 : (short)22473;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 729862069;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -6896842774245143080LL : -3943558513084754841LL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
