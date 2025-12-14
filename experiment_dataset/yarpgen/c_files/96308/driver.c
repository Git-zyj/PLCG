#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2276;
short var_1 = (short)5564;
unsigned short var_2 = (unsigned short)38763;
unsigned short var_3 = (unsigned short)12282;
unsigned short var_4 = (unsigned short)55737;
short var_6 = (short)-720;
short var_7 = (short)26082;
unsigned short var_8 = (unsigned short)2298;
unsigned short var_9 = (unsigned short)15340;
int zero = 0;
unsigned int var_10 = 1217172349U;
int var_11 = -2006003499;
unsigned long long int var_12 = 1506734311537954570ULL;
short var_13 = (short)-15887;
unsigned short var_14 = (unsigned short)19566;
short var_15 = (short)-29493;
short var_16 = (short)-15697;
unsigned short var_17 = (unsigned short)17703;
short var_18 = (short)17191;
short arr_1 [17] ;
unsigned int arr_2 [17] [17] ;
short arr_6 [17] [17] [17] [17] ;
unsigned long long int arr_12 [17] [17] [17] [17] [17] ;
int arr_17 [22] ;
unsigned int arr_19 [22] [22] ;
int arr_22 [22] ;
unsigned long long int arr_25 [24] ;
unsigned int arr_27 [24] [24] ;
unsigned long long int arr_7 [17] ;
unsigned int arr_8 [17] [17] [17] ;
unsigned short arr_9 [17] [17] ;
short arr_23 [22] [22] ;
short arr_29 [24] ;
unsigned short arr_30 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)-1416;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 1019316398U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)-25464;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 6801867501035736040ULL : 10259435280239542086ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = 393008219;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_19 [i_0] [i_1] = 3807675828U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = 899819746;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = 5734021562053448954ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_27 [i_0] [i_1] = 979402301U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 715466949059996942ULL : 425239875852838553ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3616376877U : 3562132579U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)59371 : (unsigned short)13741;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_23 [i_0] [i_1] = (short)8946;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = (short)9791;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (unsigned short)60782;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
