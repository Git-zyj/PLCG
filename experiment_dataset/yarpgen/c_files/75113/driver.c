#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13377;
signed char var_1 = (signed char)72;
signed char var_2 = (signed char)119;
signed char var_3 = (signed char)-59;
signed char var_4 = (signed char)-19;
int var_5 = 1784787468;
int var_7 = 421632919;
int var_8 = -1818195170;
short var_11 = (short)23592;
short var_12 = (short)32325;
signed char var_13 = (signed char)95;
int zero = 0;
int var_14 = -219540177;
signed char var_15 = (signed char)22;
signed char var_16 = (signed char)-112;
signed char var_17 = (signed char)-102;
int var_18 = 693940976;
short var_19 = (short)16945;
int var_20 = 1143382255;
signed char var_21 = (signed char)-83;
signed char var_22 = (signed char)-116;
short var_23 = (short)-17689;
short var_24 = (short)-26208;
int var_25 = -1636130606;
unsigned char var_26 = (unsigned char)212;
int var_27 = 782283276;
signed char var_28 = (signed char)30;
signed char var_29 = (signed char)5;
int var_30 = -1043059316;
signed char arr_3 [25] [25] ;
short arr_4 [25] [25] [25] ;
signed char arr_7 [25] [25] ;
short arr_8 [25] [25] [25] [25] ;
signed char arr_18 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)31881;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)-13855;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = (signed char)123;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
