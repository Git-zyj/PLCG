#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1717;
long long int var_1 = 8038096744635804165LL;
unsigned int var_2 = 3934062012U;
long long int var_3 = 789411152540607494LL;
unsigned short var_4 = (unsigned short)18544;
unsigned short var_5 = (unsigned short)10408;
short var_6 = (short)-8132;
unsigned int var_7 = 4067989214U;
short var_8 = (short)759;
long long int var_9 = 3067945504211591548LL;
unsigned long long int var_10 = 16202372740093712557ULL;
long long int var_11 = -4982842636412248627LL;
signed char var_12 = (signed char)-29;
signed char var_13 = (signed char)78;
int zero = 0;
short var_14 = (short)1835;
unsigned long long int var_15 = 5939372163863113917ULL;
unsigned long long int var_16 = 16713717423791838098ULL;
unsigned short var_17 = (unsigned short)42356;
unsigned short var_18 = (unsigned short)26427;
unsigned int var_19 = 890736086U;
unsigned int var_20 = 3873501848U;
signed char var_21 = (signed char)-75;
unsigned short var_22 = (unsigned short)31082;
signed char var_23 = (signed char)-109;
unsigned long long int var_24 = 17447020513778042319ULL;
short var_25 = (short)17069;
short var_26 = (short)-2167;
short var_27 = (short)18823;
unsigned char var_28 = (unsigned char)183;
signed char arr_2 [18] [18] [18] ;
short arr_4 [18] [18] ;
signed char arr_7 [19] ;
long long int arr_8 [19] [19] ;
signed char arr_9 [20] ;
signed char arr_10 [20] [20] ;
unsigned int arr_11 [12] ;
unsigned long long int arr_16 [12] [12] [12] ;
short arr_13 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (short)17573;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = -3381039416011859866LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = 1199892371U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 16514395948062501425ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (short)-27159;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
