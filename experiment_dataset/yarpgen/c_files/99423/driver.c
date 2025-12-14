#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)113;
signed char var_1 = (signed char)-110;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)29542;
signed char var_4 = (signed char)-50;
unsigned char var_5 = (unsigned char)201;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
long long int var_9 = -3389484156205005866LL;
signed char var_10 = (signed char)-78;
signed char var_11 = (signed char)75;
unsigned short var_12 = (unsigned short)21682;
unsigned short var_13 = (unsigned short)45871;
unsigned char var_14 = (unsigned char)222;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_16 = 8920503436132278206LL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)228;
long long int var_20 = 4105093104808573703LL;
int var_21 = 1832120785;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)120;
unsigned long long int var_24 = 15933516760333593613ULL;
signed char var_25 = (signed char)64;
unsigned int var_26 = 3351665268U;
_Bool var_27 = (_Bool)1;
int var_28 = 981867299;
unsigned char var_29 = (unsigned char)193;
unsigned long long int var_30 = 15248641503857664392ULL;
_Bool var_31 = (_Bool)0;
int var_32 = 603979660;
long long int var_33 = -3228658400969207057LL;
int var_34 = 1945961412;
unsigned int var_35 = 1078261783U;
unsigned int var_36 = 3474855436U;
unsigned char arr_9 [24] [24] [24] ;
unsigned short arr_10 [24] [24] [24] [24] ;
_Bool arr_15 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)44143;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
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
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
