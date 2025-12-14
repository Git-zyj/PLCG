#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6525504487887050294ULL;
long long int var_1 = 5181780531624484494LL;
long long int var_2 = 311035194496914160LL;
short var_3 = (short)-10985;
unsigned int var_4 = 1459819556U;
unsigned long long int var_5 = 5856927330945373538ULL;
unsigned int var_6 = 3483062669U;
long long int var_7 = 2650406603904041128LL;
long long int var_8 = -3435572864863155640LL;
int var_9 = 1161428387;
long long int var_10 = 6988138756293426575LL;
unsigned long long int var_11 = 17691860380515890138ULL;
unsigned int var_12 = 397598988U;
long long int var_13 = -2777206124190891073LL;
int var_16 = -308022573;
int var_17 = -1403806463;
int var_18 = 1451720591;
unsigned long long int var_19 = 10559400556058623453ULL;
int zero = 0;
long long int var_20 = 2455417600713160475LL;
long long int var_21 = -2781761777835372978LL;
long long int var_22 = -497662156981898622LL;
unsigned char var_23 = (unsigned char)194;
short var_24 = (short)2914;
_Bool var_25 = (_Bool)0;
long long int var_26 = -5621163393760567619LL;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)1;
unsigned int var_29 = 3590963395U;
unsigned int var_30 = 3337139156U;
unsigned long long int var_31 = 12270031726273426065ULL;
long long int var_32 = 1472423308688431513LL;
long long int var_33 = 1072376934145277874LL;
_Bool var_34 = (_Bool)0;
unsigned int var_35 = 837722281U;
unsigned char var_36 = (unsigned char)145;
unsigned int var_37 = 2681680482U;
_Bool var_38 = (_Bool)1;
short arr_4 [22] ;
long long int arr_5 [22] [22] ;
long long int arr_16 [11] [11] ;
unsigned char arr_24 [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)9246 : (short)-29225;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -5113905081328312052LL : -701287694652201618LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_16 [i_0] [i_1] = 8992548892004164200LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)185 : (unsigned char)12;
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
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
