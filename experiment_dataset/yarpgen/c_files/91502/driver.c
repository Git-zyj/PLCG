#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)90;
int var_3 = 1010303118;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 7661322515610326449ULL;
short var_10 = (short)-7741;
unsigned char var_11 = (unsigned char)169;
unsigned long long int var_12 = 2352618949510651010ULL;
short var_13 = (short)-28972;
unsigned int var_14 = 938893110U;
_Bool var_16 = (_Bool)1;
unsigned long long int var_18 = 8892116731216709046ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)24595;
unsigned short var_21 = (unsigned short)39795;
long long int var_22 = 3689654529679760992LL;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)238;
unsigned long long int var_25 = 5841686954721801061ULL;
int var_26 = 1914770362;
unsigned char var_27 = (unsigned char)95;
int var_28 = 210964181;
unsigned long long int var_29 = 2515578453895969951ULL;
unsigned long long int var_30 = 12602133929144584807ULL;
short var_31 = (short)15386;
short var_32 = (short)-12414;
unsigned int var_33 = 820844279U;
unsigned short var_34 = (unsigned short)61176;
short var_35 = (short)19412;
unsigned long long int arr_1 [18] ;
short arr_2 [18] ;
short arr_5 [21] [21] ;
short arr_6 [21] [21] [21] ;
unsigned short arr_9 [21] [21] [21] [21] ;
short arr_10 [21] [21] [21] [21] ;
_Bool arr_13 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 14967689453739209148ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-32247;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-27109;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)13374;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)16003;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)3594;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
