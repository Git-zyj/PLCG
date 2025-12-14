#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1592448434U;
short var_3 = (short)-5912;
unsigned char var_4 = (unsigned char)173;
unsigned int var_6 = 3687515426U;
long long int var_7 = -4109651175524990416LL;
unsigned char var_9 = (unsigned char)10;
long long int var_12 = 8376978403646751384LL;
unsigned char var_13 = (unsigned char)213;
unsigned int var_14 = 3954627919U;
signed char var_15 = (signed char)29;
int zero = 0;
long long int var_16 = -2566933800869504479LL;
unsigned int var_17 = 2698476072U;
unsigned int var_18 = 4251580286U;
unsigned long long int var_19 = 1813957310098888351ULL;
signed char var_20 = (signed char)-15;
unsigned char var_21 = (unsigned char)33;
unsigned int var_22 = 662293368U;
signed char var_23 = (signed char)31;
unsigned int var_24 = 1364440070U;
unsigned char var_25 = (unsigned char)155;
short var_26 = (short)17983;
unsigned char var_27 = (unsigned char)147;
unsigned long long int var_28 = 14606854706537145439ULL;
short var_29 = (short)-27200;
signed char var_30 = (signed char)-79;
signed char arr_0 [24] [24] ;
short arr_1 [24] [24] ;
short arr_2 [12] ;
long long int arr_4 [12] ;
unsigned int arr_6 [12] [12] ;
signed char arr_7 [12] [12] [12] ;
unsigned char arr_9 [12] [12] [12] ;
short arr_10 [12] [12] [12] ;
unsigned int arr_23 [17] ;
unsigned int arr_27 [17] [17] ;
unsigned int arr_5 [12] ;
unsigned char arr_11 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-10473;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-17359;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -1857602323205774900LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 2368363815U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)20940;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_23 [i_0] = 1446925756U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_27 [i_0] [i_1] = 4078150910U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 2115276982U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)219;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
