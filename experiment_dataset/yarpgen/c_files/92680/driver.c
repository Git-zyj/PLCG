#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
unsigned char var_3 = (unsigned char)224;
unsigned int var_4 = 3721009804U;
int var_6 = 860903371;
short var_7 = (short)22851;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 17295558327405325059ULL;
signed char var_10 = (signed char)-104;
_Bool var_12 = (_Bool)0;
short var_13 = (short)26939;
signed char var_14 = (signed char)-113;
unsigned char var_15 = (unsigned char)199;
unsigned int var_17 = 794592958U;
int var_18 = 1241992720;
int zero = 0;
short var_19 = (short)15567;
unsigned int var_20 = 3471311497U;
unsigned char var_21 = (unsigned char)77;
int var_22 = 1002931919;
unsigned short var_23 = (unsigned short)50812;
unsigned short var_24 = (unsigned short)47028;
long long int var_25 = 6052389444630485740LL;
unsigned int var_26 = 1010995199U;
unsigned long long int var_27 = 10077637717950639047ULL;
long long int var_28 = 5148105270918744826LL;
unsigned short var_29 = (unsigned short)62129;
unsigned int var_30 = 335884567U;
unsigned long long int var_31 = 10281319612055282634ULL;
signed char var_32 = (signed char)93;
unsigned long long int arr_3 [22] ;
long long int arr_12 [22] ;
unsigned int arr_13 [22] [22] [22] [22] ;
_Bool arr_14 [22] [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 9901387379784116277ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 5532955822270775896LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 2195779377U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
