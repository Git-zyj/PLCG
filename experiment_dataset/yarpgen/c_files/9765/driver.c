#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1396758798;
unsigned short var_6 = (unsigned short)56949;
short var_13 = (short)22640;
unsigned char var_14 = (unsigned char)100;
unsigned short var_15 = (unsigned short)38635;
unsigned int var_17 = 2977969490U;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 4428856U;
unsigned short var_21 = (unsigned short)24008;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)59686;
unsigned short var_24 = (unsigned short)37046;
long long int var_25 = 88543646724881140LL;
signed char var_26 = (signed char)-34;
signed char var_27 = (signed char)99;
unsigned char var_28 = (unsigned char)62;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)0;
long long int var_31 = -5046941000865639035LL;
short var_32 = (short)32656;
_Bool var_33 = (_Bool)0;
_Bool arr_1 [24] ;
long long int arr_7 [24] ;
unsigned int arr_14 [24] ;
unsigned short arr_15 [24] ;
unsigned long long int arr_17 [24] ;
_Bool arr_28 [24] [24] [24] [24] [24] [24] ;
unsigned long long int arr_30 [24] [24] [24] [24] [24] ;
unsigned char arr_36 [24] [24] [24] ;
unsigned char arr_38 [24] [24] ;
int arr_12 [24] [24] [24] [24] ;
unsigned short arr_42 [24] [24] [24] ;
unsigned long long int arr_43 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 798813739494397730LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = 26178724U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (unsigned short)10307;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = 12187080953603928379ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = 12132430632462791967ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_38 [i_0] [i_1] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 1519567277;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (unsigned short)58491;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_43 [i_0] = 6755374034415528606ULL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_43 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
