#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1623697436;
unsigned long long int var_1 = 367590218429084379ULL;
unsigned char var_2 = (unsigned char)191;
short var_3 = (short)-32264;
long long int var_5 = -2608016834381265094LL;
long long int var_7 = -6803950341689347864LL;
unsigned char var_8 = (unsigned char)253;
long long int var_9 = 6678319860434729816LL;
unsigned long long int var_10 = 8197220638571639198ULL;
unsigned long long int var_11 = 12230924724559160168ULL;
unsigned short var_12 = (unsigned short)37562;
int zero = 0;
unsigned char var_13 = (unsigned char)48;
unsigned short var_14 = (unsigned short)14771;
unsigned char var_15 = (unsigned char)153;
signed char var_16 = (signed char)-94;
unsigned long long int var_17 = 13767620874207610610ULL;
long long int var_18 = -2805026913264067985LL;
unsigned int var_19 = 3700555125U;
long long int var_20 = 6514234140519087493LL;
unsigned long long int var_21 = 8140811665788957081ULL;
unsigned int arr_0 [21] ;
unsigned char arr_1 [21] ;
short arr_4 [21] [21] ;
unsigned char arr_8 [17] [17] ;
unsigned int arr_2 [21] ;
unsigned long long int arr_5 [21] [21] [21] ;
unsigned short arr_9 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2495925362U : 2623288952U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-14 : (short)24485;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2360233549U : 3941112772U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 7351615845964097121ULL : 12156589828831789654ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)713 : (unsigned short)62085;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
