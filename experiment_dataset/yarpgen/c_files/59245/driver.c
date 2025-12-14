#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -522264036;
unsigned short var_2 = (unsigned short)11251;
unsigned short var_3 = (unsigned short)57158;
short var_4 = (short)-5560;
unsigned long long int var_5 = 11410058344281315142ULL;
unsigned int var_6 = 1501966557U;
unsigned long long int var_7 = 11283217639757987087ULL;
unsigned int var_9 = 1906023753U;
unsigned long long int var_10 = 4128429984327715053ULL;
long long int var_14 = 6697563038611892351LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_16 = (short)1032;
long long int var_17 = 4095007426816160895LL;
unsigned char var_18 = (unsigned char)207;
unsigned short var_19 = (unsigned short)41196;
signed char var_20 = (signed char)120;
unsigned char var_21 = (unsigned char)4;
signed char var_22 = (signed char)-68;
unsigned char arr_0 [16] ;
unsigned short arr_2 [16] ;
signed char arr_3 [16] ;
unsigned char arr_4 [16] ;
signed char arr_7 [16] [16] [16] ;
unsigned long long int arr_12 [25] ;
_Bool arr_13 [25] ;
long long int arr_9 [16] ;
signed char arr_10 [16] [16] [16] ;
unsigned short arr_11 [16] ;
unsigned int arr_14 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)20635;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)137 : (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = 13884599667440378095ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 760881989631006750LL : -9206197110410963601LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-53 : (signed char)-118;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55460 : (unsigned short)3715;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = 3007552236U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
