#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)95;
long long int var_2 = 6494692905550996706LL;
int var_4 = -561030010;
int var_5 = 570857655;
unsigned long long int var_8 = 7488870325611895415ULL;
unsigned long long int var_12 = 6492211360599662044ULL;
int var_13 = -594362846;
short var_14 = (short)-25107;
short var_18 = (short)9343;
int zero = 0;
int var_19 = -302985038;
long long int var_20 = -1239077991284903282LL;
int var_21 = -1599369089;
int var_22 = -1902183818;
unsigned char var_23 = (unsigned char)112;
short var_24 = (short)11096;
int var_25 = -1665400112;
int var_26 = -1971815214;
int var_27 = 591170811;
unsigned char arr_0 [24] [24] ;
int arr_1 [24] ;
short arr_3 [24] [24] ;
short arr_4 [24] [24] ;
unsigned long long int arr_7 [24] [24] [24] ;
int arr_9 [24] [24] [24] [24] [24] ;
int arr_11 [17] ;
unsigned long long int arr_16 [17] [17] [17] [17] ;
int arr_5 [24] ;
short arr_18 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 581052251;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (short)14701;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-19582;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 17404750247528066239ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = -1900097698;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = -635774737;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 13774621068592177756ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = -964803224;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (short)22589;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
