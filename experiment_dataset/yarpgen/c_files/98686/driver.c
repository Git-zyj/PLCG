#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1246074451U;
short var_3 = (short)-17562;
signed char var_7 = (signed char)32;
int var_8 = 2094246440;
long long int var_10 = -7315141737547706785LL;
signed char var_11 = (signed char)-127;
int zero = 0;
long long int var_12 = 7072361217771916966LL;
long long int var_13 = -5274031591734830278LL;
long long int var_14 = 7211861725262342076LL;
unsigned int var_15 = 2904018148U;
unsigned int var_16 = 3901318883U;
int var_17 = -399308025;
unsigned char var_18 = (unsigned char)120;
unsigned char var_19 = (unsigned char)167;
unsigned long long int var_20 = 15830553834768167452ULL;
unsigned char var_21 = (unsigned char)82;
int var_22 = -24793136;
signed char var_23 = (signed char)-33;
unsigned char arr_0 [11] ;
long long int arr_1 [11] [11] ;
long long int arr_2 [11] [11] ;
unsigned long long int arr_5 [11] [11] ;
unsigned int arr_15 [11] [11] [11] [11] ;
unsigned int arr_18 [16] ;
unsigned short arr_3 [11] ;
unsigned short arr_8 [11] [11] [11] ;
long long int arr_9 [11] ;
unsigned int arr_12 [11] [11] ;
int arr_19 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 4080436788002040070LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 1046997996218427149LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 14219155687651189191ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 3630395971U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = 2545125100U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)23087;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)40312 : (unsigned short)3700;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -1500799956207373185LL : 4682313880912308478LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 3613185257U : 3256455645U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = -696095610;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
