#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-106;
signed char var_3 = (signed char)-11;
unsigned short var_4 = (unsigned short)24397;
_Bool var_6 = (_Bool)0;
short var_7 = (short)8670;
short var_12 = (short)7351;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-56;
long long int var_19 = -2004106038367131843LL;
signed char var_20 = (signed char)70;
unsigned short var_21 = (unsigned short)20511;
unsigned char var_22 = (unsigned char)71;
unsigned long long int var_23 = 8503101005852401862ULL;
long long int var_24 = 8278659848965449682LL;
unsigned short var_25 = (unsigned short)27034;
unsigned char var_26 = (unsigned char)140;
int var_27 = -363198862;
_Bool var_28 = (_Bool)0;
long long int var_29 = -6596345169630895386LL;
unsigned char var_30 = (unsigned char)110;
_Bool var_31 = (_Bool)0;
signed char var_32 = (signed char)-14;
unsigned char var_33 = (unsigned char)146;
long long int arr_0 [16] [16] ;
unsigned char arr_1 [16] [16] ;
_Bool arr_6 [16] [16] [16] [16] ;
unsigned short arr_7 [16] [16] [16] [16] ;
unsigned short arr_8 [16] ;
short arr_9 [23] ;
signed char arr_10 [23] ;
unsigned int arr_11 [23] ;
unsigned short arr_12 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -7935049758637029644LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)57311;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned short)10775;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (short)-18133;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 3998625589U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)19018;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
