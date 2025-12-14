#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4991;
signed char var_1 = (signed char)30;
short var_2 = (short)-3970;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)46968;
unsigned long long int var_5 = 143615640401795894ULL;
unsigned char var_6 = (unsigned char)156;
short var_8 = (short)-2052;
unsigned short var_10 = (unsigned short)46365;
short var_12 = (short)-30067;
unsigned int var_14 = 1471392414U;
long long int var_15 = 5434450803087522693LL;
unsigned short var_16 = (unsigned short)5233;
unsigned long long int var_17 = 5235877421693672881ULL;
long long int var_19 = -386072994732464364LL;
int zero = 0;
unsigned short var_20 = (unsigned short)43870;
unsigned short var_21 = (unsigned short)38350;
unsigned int var_22 = 2510388421U;
signed char var_23 = (signed char)-34;
signed char var_24 = (signed char)-18;
short var_25 = (short)29314;
unsigned char var_26 = (unsigned char)208;
unsigned char var_27 = (unsigned char)19;
signed char var_28 = (signed char)-123;
unsigned short var_29 = (unsigned short)54339;
unsigned char arr_0 [11] ;
short arr_1 [11] ;
signed char arr_5 [11] [11] ;
unsigned long long int arr_6 [11] ;
signed char arr_7 [11] ;
unsigned long long int arr_10 [11] [11] [11] ;
int arr_11 [11] ;
unsigned char arr_12 [11] [11] [11] [11] ;
_Bool arr_2 [11] ;
unsigned long long int arr_3 [11] [11] ;
short arr_4 [11] [11] ;
long long int arr_13 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)18639;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 894717922140499117ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 10452066851060848254ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = 362487654;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 2637815833229940855ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-4016;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -1357867484082382602LL;
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
