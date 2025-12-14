#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34941;
unsigned short var_3 = (unsigned short)49271;
unsigned int var_4 = 341016347U;
unsigned long long int var_5 = 14277437986283016127ULL;
unsigned int var_6 = 2870955449U;
signed char var_7 = (signed char)89;
unsigned short var_9 = (unsigned short)59192;
unsigned int var_10 = 3975960411U;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 10713869643572673327ULL;
unsigned long long int var_14 = 11307866442004004014ULL;
signed char var_15 = (signed char)16;
unsigned char var_16 = (unsigned char)97;
unsigned short var_17 = (unsigned short)60791;
long long int var_18 = -4749859921224968345LL;
unsigned long long int var_19 = 6026180179095081857ULL;
unsigned short var_20 = (unsigned short)8017;
signed char var_21 = (signed char)59;
int var_22 = -1639762147;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)27047;
unsigned short var_25 = (unsigned short)35070;
signed char var_26 = (signed char)70;
signed char var_27 = (signed char)-18;
unsigned short var_28 = (unsigned short)63499;
_Bool var_29 = (_Bool)0;
int var_30 = 1912934352;
signed char var_31 = (signed char)11;
unsigned short var_32 = (unsigned short)45159;
unsigned long long int var_33 = 2259573757850489188ULL;
short var_34 = (short)-12860;
signed char var_35 = (signed char)-118;
unsigned int arr_0 [13] ;
unsigned char arr_1 [13] [13] ;
_Bool arr_2 [13] [13] ;
_Bool arr_10 [13] [13] [13] ;
unsigned short arr_16 [13] [13] [13] [13] [13] ;
long long int arr_17 [18] [18] ;
unsigned short arr_20 [18] ;
int arr_21 [18] ;
unsigned short arr_22 [18] ;
long long int arr_23 [18] [18] [18] ;
long long int arr_24 [18] ;
long long int arr_25 [18] [18] [18] [18] ;
unsigned long long int arr_26 [18] [18] [18] ;
short arr_28 [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 3817388918U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)14201;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = 2396406074813310819LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (unsigned short)165;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = -1456004837;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = (unsigned short)25261;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 6814576000153452402LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_24 [i_0] = -7665831391491192066LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 4617089267021546724LL : 4095345112200189776LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 5550028470592396136ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-712;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
