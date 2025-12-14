#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2122986949U;
unsigned int var_1 = 3542293025U;
unsigned short var_2 = (unsigned short)16005;
unsigned int var_3 = 4023197914U;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3518151263U;
unsigned int var_7 = 3589146183U;
int var_8 = -286825629;
int var_9 = -74636919;
unsigned int var_12 = 1265583303U;
_Bool var_14 = (_Bool)1;
int var_15 = -2125511575;
unsigned short var_16 = (unsigned short)60159;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = 1135737823;
_Bool var_20 = (_Bool)0;
int var_21 = -1193786573;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)37043;
_Bool var_26 = (_Bool)1;
int var_27 = -1782554374;
int var_28 = -1540137946;
_Bool var_29 = (_Bool)0;
unsigned int arr_7 [22] ;
unsigned int arr_18 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 2481406139U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 3620105307U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
