#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4001716322006356670LL;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)235;
unsigned short var_3 = (unsigned short)22829;
int var_4 = 1827778127;
unsigned short var_6 = (unsigned short)17447;
int var_9 = -926470856;
short var_10 = (short)-14418;
unsigned short var_11 = (unsigned short)55588;
signed char var_12 = (signed char)-124;
unsigned int var_13 = 2560253168U;
int zero = 0;
long long int var_14 = 7218227480391289644LL;
_Bool var_15 = (_Bool)0;
int var_16 = -511736122;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 4133804779U;
long long int var_19 = 6278156218324982549LL;
long long int var_20 = -6260616450800809141LL;
long long int arr_1 [12] ;
long long int arr_2 [12] ;
unsigned int arr_4 [12] [12] ;
int arr_5 [12] ;
long long int arr_6 [12] [12] ;
signed char arr_11 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2006861103487460055LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 556208995063628395LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 1106651150U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 1029872152;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 8553516462148732197LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-108 : (signed char)-115;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
