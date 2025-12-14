#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10127;
short var_2 = (short)17117;
short var_3 = (short)-26561;
unsigned long long int var_4 = 6102300194457364019ULL;
unsigned long long int var_5 = 3902941938401063656ULL;
unsigned char var_6 = (unsigned char)33;
unsigned short var_7 = (unsigned short)55487;
short var_8 = (short)29138;
short var_9 = (short)-5685;
unsigned long long int var_10 = 4900680689133959570ULL;
unsigned char var_11 = (unsigned char)30;
short var_12 = (short)8438;
short var_13 = (short)-32574;
unsigned short var_14 = (unsigned short)38012;
unsigned short var_15 = (unsigned short)60494;
short var_16 = (short)20997;
unsigned long long int var_17 = 14125035077754675913ULL;
int zero = 0;
unsigned long long int var_18 = 2685193371577934063ULL;
unsigned short var_19 = (unsigned short)23692;
short var_20 = (short)20125;
short var_21 = (short)14908;
unsigned char var_22 = (unsigned char)97;
unsigned short var_23 = (unsigned short)23635;
short var_24 = (short)2272;
unsigned short var_25 = (unsigned short)24217;
unsigned char var_26 = (unsigned char)138;
short var_27 = (short)27330;
unsigned short var_28 = (unsigned short)18543;
unsigned short var_29 = (unsigned short)31735;
unsigned short var_30 = (unsigned short)8321;
short var_31 = (short)-30439;
unsigned short var_32 = (unsigned short)21125;
short var_33 = (short)-23538;
short var_34 = (short)-25741;
short var_35 = (short)3010;
short arr_0 [16] ;
short arr_1 [16] [16] ;
short arr_2 [21] ;
unsigned char arr_3 [21] [21] ;
unsigned long long int arr_6 [12] ;
unsigned short arr_7 [12] ;
unsigned short arr_8 [12] ;
unsigned short arr_9 [12] [12] [12] ;
short arr_10 [12] ;
unsigned short arr_12 [12] ;
short arr_13 [12] [12] [12] [12] [12] [12] ;
unsigned short arr_15 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)11478;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-28026;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)-18848;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 16654205552383888675ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned short)48850;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned short)32538;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)16982;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (short)-23531;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (unsigned short)27570;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (short)18631 : (short)-28549;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)52424 : (unsigned short)12577;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
