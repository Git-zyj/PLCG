#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4737695437562469527LL;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1451563988U;
_Bool var_4 = (_Bool)0;
long long int var_5 = -2631801991069622371LL;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 4182657297U;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int var_10 = -738081128;
unsigned char var_12 = (unsigned char)180;
signed char var_14 = (signed char)-34;
int zero = 0;
short var_18 = (short)-23957;
unsigned int var_19 = 2904111459U;
unsigned int var_20 = 1114286396U;
unsigned int var_21 = 1818126147U;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 2450721739U;
signed char var_24 = (signed char)77;
unsigned long long int var_25 = 16436233844133419717ULL;
unsigned long long int var_26 = 1936854383103966293ULL;
long long int var_27 = 4745571858251082213LL;
unsigned long long int arr_1 [16] ;
unsigned int arr_2 [16] [16] ;
short arr_6 [16] ;
unsigned int arr_11 [16] [16] [16] [16] ;
unsigned char arr_12 [16] [16] [16] [16] ;
unsigned long long int arr_16 [16] ;
_Bool arr_3 [16] ;
short arr_4 [16] ;
unsigned int arr_14 [16] [16] [16] ;
_Bool arr_19 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2738263782101739795ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 2056983424U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (short)-6683;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 718289500U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)255 : (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = 16693624943745615309ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)-3447;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1694420293U : 239101181U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
