#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)130;
unsigned char var_3 = (unsigned char)103;
long long int var_5 = -1627558368860187414LL;
signed char var_6 = (signed char)-125;
unsigned char var_7 = (unsigned char)170;
unsigned long long int var_8 = 513632191330160235ULL;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 1139480417U;
long long int var_11 = -6981656137532359939LL;
unsigned int var_12 = 1194021789U;
unsigned char var_13 = (unsigned char)253;
signed char var_14 = (signed char)9;
int zero = 0;
short var_15 = (short)-7068;
unsigned int var_16 = 638521401U;
int var_17 = -636027194;
unsigned long long int var_18 = 8288327575079455963ULL;
unsigned short var_19 = (unsigned short)62817;
unsigned int var_20 = 1835774483U;
unsigned char var_21 = (unsigned char)40;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 14516204431471876539ULL;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)112;
unsigned int var_26 = 2030101066U;
_Bool var_27 = (_Bool)0;
int var_28 = 853351479;
_Bool var_29 = (_Bool)1;
unsigned int var_30 = 782890094U;
int var_31 = -678417847;
unsigned long long int var_32 = 12318686081038665592ULL;
unsigned int var_33 = 2030449710U;
long long int var_34 = -504469398300815706LL;
unsigned int var_35 = 425945968U;
_Bool arr_2 [22] [22] ;
int arr_5 [23] [23] ;
unsigned char arr_6 [23] ;
int arr_7 [23] ;
unsigned char arr_9 [23] [23] [23] ;
long long int arr_10 [23] [23] ;
unsigned long long int arr_11 [23] [23] [23] [23] ;
unsigned short arr_13 [23] [23] [23] [23] ;
long long int arr_14 [23] [23] [23] [23] [23] [23] ;
signed char arr_16 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -303035200 : 511337394;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)247 : (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -748431873 : -1304247884;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)30 : (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 4909331071649302437LL : 4490941567433912920LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 2164184924538362358ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)44442 : (unsigned short)13993;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -3375732574154082588LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)102;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
