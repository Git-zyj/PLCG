#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15369797108328681453ULL;
unsigned int var_1 = 1082213860U;
short var_2 = (short)4971;
short var_3 = (short)22188;
signed char var_4 = (signed char)-104;
unsigned short var_5 = (unsigned short)24686;
unsigned long long int var_6 = 18043724410639505073ULL;
unsigned int var_7 = 3861470613U;
unsigned int var_8 = 4096706911U;
unsigned char var_9 = (unsigned char)199;
int zero = 0;
unsigned short var_10 = (unsigned short)44260;
short var_11 = (short)-13826;
unsigned long long int var_12 = 6672485321927798034ULL;
int var_13 = -1350540356;
unsigned short var_14 = (unsigned short)20362;
int var_15 = -1309582958;
unsigned short var_16 = (unsigned short)4534;
int var_17 = -403515877;
unsigned char var_18 = (unsigned char)202;
unsigned long long int var_19 = 8719009168188550857ULL;
unsigned long long int var_20 = 4581354954126027483ULL;
unsigned char var_21 = (unsigned char)80;
signed char var_22 = (signed char)97;
long long int var_23 = -76090046540363947LL;
unsigned short var_24 = (unsigned short)49791;
signed char var_25 = (signed char)-82;
unsigned char var_26 = (unsigned char)1;
unsigned char arr_9 [10] ;
long long int arr_10 [10] [10] ;
int arr_15 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = 3103142899585938017LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? -883421802 : 372412604;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
