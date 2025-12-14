#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-59;
int var_1 = -240219987;
int var_3 = 1243731844;
unsigned int var_4 = 3751150790U;
int var_5 = -502479590;
int var_6 = 337539524;
int var_7 = 182352603;
signed char var_8 = (signed char)-16;
unsigned char var_9 = (unsigned char)109;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int var_14 = -2012691835;
signed char var_15 = (signed char)79;
_Bool var_16 = (_Bool)0;
unsigned char var_18 = (unsigned char)118;
int zero = 0;
signed char var_19 = (signed char)68;
unsigned short var_20 = (unsigned short)3195;
unsigned char var_21 = (unsigned char)130;
unsigned char var_22 = (unsigned char)117;
long long int var_23 = 8743831783084267720LL;
long long int var_24 = 211709383626589443LL;
_Bool var_25 = (_Bool)0;
unsigned int var_26 = 134248009U;
unsigned char var_27 = (unsigned char)27;
int var_28 = 746670316;
signed char var_29 = (signed char)22;
signed char var_30 = (signed char)-19;
unsigned short var_31 = (unsigned short)46694;
signed char var_32 = (signed char)55;
int var_33 = -1110043039;
long long int var_34 = -4360336015049587264LL;
unsigned char var_35 = (unsigned char)181;
unsigned char arr_0 [23] ;
unsigned int arr_1 [23] ;
unsigned short arr_2 [23] ;
int arr_4 [23] [23] [23] ;
short arr_6 [23] [23] [23] [23] ;
unsigned short arr_7 [23] [23] [23] [23] ;
long long int arr_10 [23] [23] [23] [23] ;
unsigned int arr_13 [23] [23] [23] [23] [23] [23] [23] ;
_Bool arr_17 [23] [23] [23] [23] [23] ;
unsigned int arr_18 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1240194021U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)40959;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1734129639;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)-28525;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)62748 : (unsigned short)65409;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -4504216898754579891LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 4090967997U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = 1925353071U;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
