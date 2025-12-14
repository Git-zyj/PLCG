#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3199;
short var_4 = (short)21056;
short var_5 = (short)28530;
short var_6 = (short)-3897;
signed char var_7 = (signed char)47;
short var_9 = (short)-23688;
short var_10 = (short)10352;
unsigned char var_11 = (unsigned char)8;
int zero = 0;
signed char var_13 = (signed char)75;
unsigned char var_14 = (unsigned char)223;
signed char var_15 = (signed char)-28;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-32;
_Bool var_18 = (_Bool)0;
int var_19 = 2060304725;
unsigned char var_20 = (unsigned char)176;
unsigned char var_21 = (unsigned char)165;
short var_22 = (short)-26066;
short var_23 = (short)30754;
unsigned char var_24 = (unsigned char)201;
unsigned char var_25 = (unsigned char)118;
signed char var_26 = (signed char)-36;
int var_27 = -1658638867;
short var_28 = (short)7787;
unsigned char var_29 = (unsigned char)157;
unsigned char var_30 = (unsigned char)165;
int var_31 = -1780585771;
unsigned int var_32 = 774202797U;
_Bool var_33 = (_Bool)1;
short var_34 = (short)2281;
short var_35 = (short)-26794;
unsigned char var_36 = (unsigned char)231;
int arr_1 [16] ;
unsigned char arr_2 [16] [16] ;
unsigned int arr_4 [16] [16] [16] [16] ;
unsigned char arr_5 [16] [16] [16] ;
unsigned int arr_12 [16] [16] [16] [16] ;
int arr_14 [16] [16] ;
unsigned char arr_17 [16] [16] [16] [16] [16] [16] ;
unsigned char arr_20 [16] ;
int arr_29 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 859708024;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 3562040001U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 3920095204U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = 251223361;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = -2088720025;
}

void checksum() {
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
    hash(&seed, var_36);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
