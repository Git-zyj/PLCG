#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)117;
unsigned char var_3 = (unsigned char)175;
unsigned long long int var_6 = 12389920567236907214ULL;
unsigned char var_7 = (unsigned char)0;
signed char var_9 = (signed char)28;
long long int var_10 = 2667525578874281722LL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3474404768U;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = 245816203;
unsigned char var_20 = (unsigned char)19;
int var_21 = 1611819920;
short var_22 = (short)-20285;
unsigned short var_23 = (unsigned short)15675;
unsigned long long int var_24 = 15934968591367196489ULL;
int var_25 = -1330204371;
int arr_1 [20] [20] ;
signed char arr_5 [21] [21] [21] ;
unsigned char arr_6 [21] [21] [21] ;
short arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? -1853604985 : 271723247;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)2;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)105 : (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (short)964;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
