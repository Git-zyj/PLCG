#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1735325067U;
int var_1 = 340145664;
unsigned int var_2 = 1679867792U;
long long int var_3 = 2911489693129638592LL;
unsigned char var_4 = (unsigned char)201;
long long int var_5 = -470186335346879515LL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)4331;
unsigned long long int var_8 = 4360920668306659731ULL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1544113198U;
_Bool var_12 = (_Bool)1;
long long int var_13 = -6014345605391986863LL;
int zero = 0;
unsigned long long int var_14 = 174813381739128629ULL;
unsigned long long int var_15 = 6207622195306507965ULL;
unsigned int var_16 = 2945236288U;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-4053;
unsigned long long int var_19 = 17219691583487031514ULL;
unsigned char arr_0 [10] ;
unsigned long long int arr_1 [10] [10] ;
short arr_2 [10] ;
short arr_3 [10] [10] [10] ;
unsigned long long int arr_4 [10] ;
signed char arr_5 [10] ;
unsigned char arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)236 : (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 12977601462124879328ULL : 6238764810227675700ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)22279 : (short)27053;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)30673;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 4641588754147478422ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)205 : (unsigned char)207;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
