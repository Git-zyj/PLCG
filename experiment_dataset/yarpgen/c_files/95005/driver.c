#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46161;
unsigned long long int var_3 = 13215976089821183901ULL;
unsigned int var_4 = 3891905774U;
unsigned long long int var_5 = 9949266340605884683ULL;
unsigned int var_18 = 3264286936U;
int zero = 0;
unsigned long long int var_19 = 8047694644602922225ULL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)51328;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)22448;
long long int var_25 = -7393857661931492891LL;
unsigned char var_26 = (unsigned char)25;
int var_27 = 1282459151;
unsigned short arr_0 [10] [10] ;
unsigned long long int arr_1 [10] ;
unsigned long long int arr_2 [10] ;
int arr_3 [10] [10] [10] ;
int arr_4 [10] ;
int arr_5 [10] [10] [10] ;
unsigned short arr_6 [10] [10] [10] ;
int arr_7 [10] ;
_Bool arr_8 [10] [10] ;
unsigned long long int arr_11 [10] ;
long long int arr_9 [10] [10] [10] ;
int arr_10 [10] [10] ;
unsigned long long int arr_13 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)45957;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 9917180909559372973ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 12700420027777009741ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 723583543;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 1517136761;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1561284115;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)17120;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = -1895093181;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = 9490802263055476857ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -8456449080387885618LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = -2053046180;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = 5615369316740267171ULL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
