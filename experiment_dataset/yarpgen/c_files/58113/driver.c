#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)190;
unsigned short var_1 = (unsigned short)17492;
unsigned char var_2 = (unsigned char)225;
signed char var_3 = (signed char)-82;
unsigned int var_4 = 3998341974U;
unsigned char var_5 = (unsigned char)209;
unsigned int var_6 = 3141055486U;
long long int var_7 = -7612939664819317354LL;
unsigned short var_8 = (unsigned short)63055;
unsigned char var_9 = (unsigned char)77;
int zero = 0;
unsigned char var_10 = (unsigned char)218;
long long int var_11 = 4094192558278581408LL;
unsigned char var_12 = (unsigned char)73;
unsigned char var_13 = (unsigned char)165;
signed char var_14 = (signed char)-48;
long long int var_15 = -3152001021597230977LL;
unsigned char var_16 = (unsigned char)43;
int var_17 = -2087086206;
unsigned int var_18 = 2691669738U;
short var_19 = (short)14937;
int var_20 = -1494039449;
unsigned char var_21 = (unsigned char)155;
long long int var_22 = -7913567519060377364LL;
unsigned long long int var_23 = 16895056942969911461ULL;
long long int var_24 = 749196442977181495LL;
long long int arr_1 [20] ;
long long int arr_2 [20] [20] ;
signed char arr_3 [20] ;
unsigned char arr_5 [20] [20] [20] [20] ;
unsigned int arr_6 [20] [20] [20] [20] ;
_Bool arr_7 [20] [20] [20] [20] ;
short arr_9 [24] ;
long long int arr_10 [24] ;
short arr_11 [24] ;
long long int arr_12 [24] [24] [24] ;
unsigned int arr_8 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -6610448260081765043LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 4248609398995491635LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)219 : (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 3203311604U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (short)28211;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = -1874376089124188830LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (short)-26314;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 1495729684905722976LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 3203041650U : 88620599U;
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
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
