#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
signed char var_1 = (signed char)-112;
_Bool var_9 = (_Bool)1;
int var_10 = 415552335;
unsigned long long int var_11 = 7874591806068906361ULL;
long long int var_13 = 4853769735379094085LL;
unsigned short var_15 = (unsigned short)53662;
int zero = 0;
unsigned int var_16 = 3210649327U;
long long int var_17 = 2865207973112905695LL;
unsigned char var_18 = (unsigned char)255;
unsigned int var_19 = 1019949200U;
long long int var_20 = -5006307785702527384LL;
unsigned long long int var_21 = 15514770592475508646ULL;
unsigned long long int var_22 = 5030873928374193654ULL;
short var_23 = (short)-31586;
unsigned int var_24 = 2648990985U;
unsigned int var_25 = 1809031856U;
_Bool arr_0 [23] ;
unsigned int arr_1 [23] ;
unsigned int arr_4 [10] ;
signed char arr_5 [10] [10] ;
short arr_7 [10] ;
unsigned char arr_11 [10] ;
signed char arr_13 [10] ;
long long int arr_2 [23] [23] ;
unsigned long long int arr_6 [10] [10] ;
long long int arr_9 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 3064586468U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 1272577095U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-13177 : (short)-7782;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)138 : (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -7207421737598812602LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 1029918957687990993ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -674441478332118067LL : 4677890918875206890LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
