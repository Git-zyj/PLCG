#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7705;
unsigned int var_3 = 2605997088U;
unsigned int var_4 = 360798042U;
long long int var_6 = -3664816484544222068LL;
int var_10 = -1396770799;
unsigned short var_14 = (unsigned short)12799;
long long int var_16 = -65416179729225078LL;
int zero = 0;
unsigned long long int var_20 = 12211638590153531497ULL;
unsigned long long int var_21 = 262280062047148190ULL;
long long int var_22 = 2076590122508562542LL;
unsigned short var_23 = (unsigned short)63469;
unsigned long long int var_24 = 17596623693141012441ULL;
unsigned short var_25 = (unsigned short)12133;
unsigned short var_26 = (unsigned short)5771;
unsigned char var_27 = (unsigned char)116;
unsigned long long int var_28 = 9959739333399068391ULL;
unsigned short var_29 = (unsigned short)23664;
unsigned long long int arr_0 [12] [12] ;
unsigned long long int arr_3 [12] ;
unsigned long long int arr_4 [21] ;
int arr_11 [10] ;
long long int arr_12 [23] ;
unsigned long long int arr_13 [23] ;
unsigned short arr_16 [23] [23] [23] ;
long long int arr_7 [21] [21] ;
unsigned long long int arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 18248581915972036443ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 9883350849466716091ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 10029176429799819566ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = 1093244580;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = -3052548635045612232LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 16396725697001349316ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned short)33314;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = 3052293025723494683LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 15040382355702313346ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
