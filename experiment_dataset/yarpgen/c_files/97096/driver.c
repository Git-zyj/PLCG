#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13569122219488806500ULL;
unsigned char var_3 = (unsigned char)192;
long long int var_4 = 599870703730312561LL;
unsigned long long int var_5 = 8009739161060793365ULL;
unsigned char var_7 = (unsigned char)199;
signed char var_8 = (signed char)124;
unsigned char var_9 = (unsigned char)35;
short var_10 = (short)9599;
short var_11 = (short)-20466;
unsigned char var_12 = (unsigned char)137;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 16499813474889633070ULL;
unsigned long long int var_15 = 16264342888944009248ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)176;
short var_18 = (short)-12607;
long long int var_19 = -4629492827089645673LL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)48;
unsigned char var_22 = (unsigned char)89;
unsigned char var_23 = (unsigned char)254;
_Bool var_24 = (_Bool)0;
int var_25 = 1914310731;
long long int arr_0 [17] [17] ;
short arr_1 [17] [17] ;
unsigned char arr_4 [19] ;
signed char arr_12 [15] [15] ;
unsigned long long int arr_14 [15] [15] ;
_Bool arr_2 [17] ;
unsigned int arr_3 [17] [17] ;
unsigned long long int arr_9 [14] ;
unsigned long long int arr_10 [14] ;
short arr_17 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = -1903950462948429605LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-29139;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = 13420341722108022884ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 2391571186U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 11516047614622639986ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 15269625491113553135ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (short)5466;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
