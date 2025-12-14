#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 643586916099328264ULL;
unsigned int var_5 = 1371069253U;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)37955;
unsigned char var_9 = (unsigned char)121;
short var_13 = (short)-15965;
long long int var_14 = 8138012630982821091LL;
long long int var_15 = 430001188525091466LL;
unsigned short var_17 = (unsigned short)17820;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)12869;
long long int var_22 = 6046295717357489074LL;
long long int var_23 = 6556548494457411862LL;
unsigned char var_24 = (unsigned char)100;
signed char var_25 = (signed char)-54;
long long int var_26 = -5904249425513099903LL;
signed char var_27 = (signed char)42;
signed char var_28 = (signed char)62;
unsigned short arr_2 [23] ;
int arr_6 [23] ;
long long int arr_13 [23] [23] ;
unsigned char arr_16 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)60573;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -1062656475 : 1794117208;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 5089610914753675574LL : -1455932046799361678LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)94 : (unsigned char)219;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
