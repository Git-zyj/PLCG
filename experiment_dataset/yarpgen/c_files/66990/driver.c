#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
int var_5 = -897313769;
signed char var_8 = (signed char)94;
int var_9 = -1517784018;
long long int var_11 = -1735583440789825210LL;
unsigned char var_13 = (unsigned char)65;
unsigned int var_14 = 4228860760U;
int zero = 0;
unsigned short var_17 = (unsigned short)60189;
unsigned char var_18 = (unsigned char)82;
unsigned char var_19 = (unsigned char)187;
_Bool var_20 = (_Bool)0;
int var_21 = 1845655952;
unsigned short var_22 = (unsigned short)12396;
long long int var_23 = 4762173448149617736LL;
unsigned int var_24 = 3350740252U;
int var_25 = -1394504365;
signed char var_26 = (signed char)-100;
_Bool var_27 = (_Bool)1;
signed char var_28 = (signed char)-73;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)1;
unsigned char var_31 = (unsigned char)109;
unsigned short var_32 = (unsigned short)25229;
unsigned char var_33 = (unsigned char)233;
long long int var_34 = 8665928221938696696LL;
signed char arr_0 [24] ;
signed char arr_1 [24] [24] ;
_Bool arr_7 [10] [10] [10] ;
_Bool arr_9 [17] [17] ;
_Bool arr_13 [17] [17] [17] ;
unsigned int arr_14 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 521302571U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
