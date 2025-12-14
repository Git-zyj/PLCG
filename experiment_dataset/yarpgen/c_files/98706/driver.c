#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-24882;
short var_3 = (short)27982;
short var_4 = (short)8580;
short var_5 = (short)416;
short var_7 = (short)17302;
short var_8 = (short)28811;
short var_11 = (short)20103;
short var_12 = (short)21354;
short var_13 = (short)-3801;
int zero = 0;
short var_14 = (short)-8788;
short var_15 = (short)-24142;
short var_16 = (short)10435;
short var_17 = (short)-26412;
short var_18 = (short)13049;
short var_19 = (short)-7610;
short var_20 = (short)17721;
short var_21 = (short)-5665;
short var_22 = (short)17182;
short var_23 = (short)31335;
short var_24 = (short)5135;
short var_25 = (short)-9249;
short var_26 = (short)20806;
short var_27 = (short)-6815;
short var_28 = (short)31728;
short var_29 = (short)27337;
short var_30 = (short)12672;
short var_31 = (short)-6825;
short arr_0 [15] ;
short arr_5 [15] ;
short arr_6 [15] ;
short arr_21 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)-6489;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (short)-27959;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (short)18673;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (short)-7716;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
