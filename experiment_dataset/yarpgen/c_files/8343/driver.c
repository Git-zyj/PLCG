#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-36;
short var_3 = (short)-18984;
unsigned int var_4 = 3676111479U;
int var_6 = 1176380363;
int var_8 = -266598618;
signed char var_9 = (signed char)24;
int var_11 = -1786780283;
_Bool var_12 = (_Bool)0;
int var_13 = 329301513;
signed char var_14 = (signed char)-82;
unsigned int var_15 = 2707284091U;
short var_16 = (short)-26194;
int zero = 0;
unsigned short var_18 = (unsigned short)64273;
_Bool var_19 = (_Bool)1;
long long int var_20 = -788183867977830501LL;
unsigned int var_21 = 3732163903U;
unsigned char var_22 = (unsigned char)189;
_Bool var_23 = (_Bool)1;
long long int var_24 = -2644537755913573128LL;
int var_25 = 1287310366;
short var_26 = (short)-19530;
unsigned short var_27 = (unsigned short)15696;
long long int var_28 = 835535779611250599LL;
unsigned int var_29 = 2392105317U;
int var_30 = 104774592;
signed char var_31 = (signed char)-101;
signed char var_32 = (signed char)-11;
int var_33 = 356926256;
signed char var_34 = (signed char)62;
unsigned char var_35 = (unsigned char)61;
signed char var_36 = (signed char)104;
unsigned char var_37 = (unsigned char)175;
signed char var_38 = (signed char)-4;
long long int var_39 = 6296971463763159365LL;
_Bool var_40 = (_Bool)1;
int var_41 = -1412223232;
short var_42 = (short)-18877;
int var_43 = 180823016;
int var_44 = -2064875163;
long long int var_45 = 6627923186882081763LL;
unsigned char var_46 = (unsigned char)149;
unsigned char var_47 = (unsigned char)12;
unsigned int var_48 = 2662353960U;
long long int arr_0 [25] [25] ;
unsigned char arr_1 [25] [25] ;
_Bool arr_2 [25] ;
signed char arr_3 [25] ;
signed char arr_5 [25] [25] ;
_Bool arr_6 [25] [25] [25] ;
signed char arr_7 [25] [25] ;
signed char arr_9 [25] [25] [25] ;
signed char arr_12 [25] [25] [25] [25] [25] [25] ;
int arr_13 [25] [25] [25] [25] [25] [25] [25] ;
unsigned short arr_15 [25] [25] ;
short arr_16 [12] [12] ;
unsigned int arr_22 [25] ;
unsigned char arr_24 [25] ;
short arr_28 [25] [25] ;
_Bool arr_30 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -2623493474758949786LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-73 : (signed char)112;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-45 : (signed char)67;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? 801096677 : 1812040833;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)31571 : (unsigned short)44996;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)32299 : (short)-23165;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = 2499237342U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_28 [i_0] [i_1] = (short)26108;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
