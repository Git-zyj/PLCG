#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13370;
unsigned short var_1 = (unsigned short)46257;
unsigned short var_2 = (unsigned short)37384;
_Bool var_4 = (_Bool)0;
long long int var_7 = 2218683286023892773LL;
long long int var_9 = -9014011023616285754LL;
short var_10 = (short)-24961;
int zero = 0;
unsigned short var_11 = (unsigned short)46364;
unsigned short var_12 = (unsigned short)49467;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 4188326050U;
unsigned long long int var_15 = 2890416844627567600ULL;
long long int var_16 = 3315902405822123195LL;
signed char var_17 = (signed char)64;
int var_18 = 1060081512;
long long int var_19 = -7480161823669383219LL;
unsigned int var_20 = 850240889U;
unsigned short var_21 = (unsigned short)40261;
unsigned long long int var_22 = 8286489946983737723ULL;
unsigned long long int var_23 = 15396788631926900182ULL;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 874735381452505377ULL;
unsigned long long int var_27 = 17944449479479120347ULL;
signed char arr_0 [24] ;
unsigned char arr_1 [24] ;
unsigned long long int arr_2 [24] ;
int arr_3 [24] [24] ;
unsigned long long int arr_4 [20] [20] ;
unsigned short arr_5 [20] [20] ;
unsigned long long int arr_6 [20] ;
short arr_7 [20] ;
signed char arr_8 [20] ;
unsigned short arr_9 [20] [20] [20] ;
int arr_11 [20] ;
unsigned int arr_12 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 1411706964287744512ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = -1207602974;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 18294179167892686839ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)16336 : (unsigned short)27037;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 478844014910115414ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-29900 : (short)-29221;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)5228 : (unsigned short)46075;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = 918959969;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = 896624924U;
}

void checksum() {
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
