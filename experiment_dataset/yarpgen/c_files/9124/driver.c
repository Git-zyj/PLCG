#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4806154631105072698ULL;
unsigned short var_7 = (unsigned short)26450;
long long int var_10 = -3815271951596111994LL;
long long int var_13 = -6533178359092482755LL;
unsigned short var_14 = (unsigned short)40441;
long long int var_15 = 3502035164312852065LL;
long long int var_16 = -7939111091331975896LL;
int zero = 0;
long long int var_17 = 5146049757724739868LL;
long long int var_18 = 1040569079202773197LL;
unsigned short var_19 = (unsigned short)32064;
int var_20 = -999386011;
long long int var_21 = -6420920224138022114LL;
unsigned short var_22 = (unsigned short)53490;
unsigned int var_23 = 2847041714U;
unsigned short var_24 = (unsigned short)31763;
long long int arr_3 [20] ;
long long int arr_4 [20] ;
unsigned short arr_5 [20] [20] [20] ;
long long int arr_16 [18] [18] [18] ;
int arr_2 [20] [20] ;
unsigned short arr_17 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 3890534532063047138LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 3542866293113420180LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)19865 : (unsigned short)53499;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 4797800189270209149LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 2030448280;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned short)51568;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
