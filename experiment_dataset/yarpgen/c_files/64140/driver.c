#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16005224868068463309ULL;
int var_7 = 272711118;
unsigned char var_8 = (unsigned char)48;
unsigned int var_10 = 170791299U;
short var_12 = (short)-5683;
int zero = 0;
short var_13 = (short)11206;
int var_14 = 627018092;
long long int var_15 = 4544892308771299892LL;
short var_16 = (short)7692;
unsigned long long int var_17 = 360473586017255213ULL;
unsigned char var_18 = (unsigned char)168;
unsigned char var_19 = (unsigned char)142;
short var_20 = (short)1334;
unsigned int var_21 = 3280784009U;
short var_22 = (short)17815;
short var_23 = (short)-1726;
unsigned int var_24 = 1170428744U;
unsigned int arr_0 [19] ;
long long int arr_1 [19] ;
unsigned long long int arr_3 [19] [19] ;
int arr_4 [19] [19] ;
short arr_5 [22] ;
unsigned long long int arr_6 [22] ;
unsigned int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 791140035U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -922905370844429859LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 1977120790245347766ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 94576000;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (short)32232;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 3672144940315378073ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 440892396U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
