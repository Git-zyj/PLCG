#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6586914562489539708LL;
unsigned short var_1 = (unsigned short)63874;
short var_3 = (short)-20844;
long long int var_4 = 6928540738049592045LL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 17499917004808778288ULL;
unsigned char var_12 = (unsigned char)34;
unsigned long long int var_13 = 9535040472046708673ULL;
unsigned int var_14 = 1480817064U;
unsigned char var_15 = (unsigned char)91;
int zero = 0;
unsigned int var_16 = 2649085407U;
unsigned int var_17 = 2851164425U;
unsigned int var_18 = 2221776839U;
unsigned int var_19 = 3500269290U;
int var_20 = -33085507;
signed char var_21 = (signed char)14;
unsigned char var_22 = (unsigned char)87;
unsigned int var_23 = 2414795040U;
unsigned long long int var_24 = 11318307997185022422ULL;
unsigned char var_25 = (unsigned char)206;
unsigned short var_26 = (unsigned short)53767;
unsigned char var_27 = (unsigned char)155;
short var_28 = (short)5249;
unsigned short var_29 = (unsigned short)64054;
short var_30 = (short)21026;
unsigned long long int var_31 = 3151191935904839701ULL;
short var_32 = (short)-27644;
_Bool var_33 = (_Bool)0;
unsigned short var_34 = (unsigned short)17720;
unsigned char arr_3 [12] [12] [12] ;
unsigned int arr_4 [12] [12] [12] ;
unsigned long long int arr_8 [12] [12] [12] [12] [12] [12] ;
int arr_12 [12] [12] [12] [12] [12] ;
unsigned char arr_13 [16] ;
unsigned short arr_17 [16] ;
unsigned long long int arr_20 [18] ;
signed char arr_7 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3875487933U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1108597124336178908ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = -1719505531;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (unsigned short)54237;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = 2110845451791971163ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)(-127 - 1);
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
