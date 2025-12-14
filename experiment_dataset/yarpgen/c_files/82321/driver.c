#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8867637742136275348ULL;
signed char var_3 = (signed char)-17;
unsigned long long int var_4 = 8901269364631223202ULL;
unsigned long long int var_5 = 12665282955644794834ULL;
unsigned long long int var_6 = 18251101050595623241ULL;
short var_7 = (short)14408;
unsigned char var_8 = (unsigned char)131;
int zero = 0;
unsigned int var_10 = 3902776435U;
long long int var_11 = 3802466587099584137LL;
short var_12 = (short)-10032;
unsigned int var_13 = 3915775230U;
unsigned short var_14 = (unsigned short)49923;
unsigned long long int var_15 = 14628557727442491914ULL;
unsigned long long int var_16 = 5874410948640984811ULL;
unsigned long long int var_17 = 14831536298253405589ULL;
unsigned long long int var_18 = 9021955574859533156ULL;
int var_19 = -342428090;
signed char var_20 = (signed char)42;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 3964057244U;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 13197985616350941771ULL;
int arr_0 [15] ;
unsigned long long int arr_1 [15] ;
short arr_2 [15] ;
int arr_3 [15] ;
unsigned long long int arr_6 [15] [15] ;
_Bool arr_7 [15] [15] [15] [15] ;
_Bool arr_12 [10] [10] [10] ;
_Bool arr_13 [10] [10] ;
unsigned long long int arr_19 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1947139501;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 12582695205391564132ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)-30567;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 504760680;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 16870390729734901722ULL : 3175701576828948252ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = 10716916199938351860ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
