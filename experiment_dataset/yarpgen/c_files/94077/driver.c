#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -518695649;
long long int var_2 = 3113812856268653591LL;
unsigned char var_3 = (unsigned char)30;
int var_6 = -353185515;
unsigned long long int var_9 = 6810683930413010080ULL;
unsigned long long int var_11 = 16024645247379153221ULL;
int zero = 0;
long long int var_14 = 6366719843660286352LL;
int var_15 = -614862336;
unsigned int var_16 = 1408388372U;
int var_17 = 1106105406;
short var_18 = (short)-6297;
short var_19 = (short)17624;
long long int var_20 = 2633768998387571494LL;
unsigned int var_21 = 2286949116U;
_Bool arr_2 [12] ;
unsigned short arr_6 [12] ;
unsigned short arr_7 [12] [12] [12] [12] ;
unsigned long long int arr_8 [12] [12] [12] [12] ;
long long int arr_9 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)55972;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)11659;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 1404348712593224991ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = 6735309582381130666LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
