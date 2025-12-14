#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)341;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 7255114889567371470ULL;
unsigned long long int var_6 = 11668807659468448535ULL;
int var_11 = 529544443;
unsigned long long int var_14 = 13084479663650805207ULL;
int var_16 = -151994214;
int zero = 0;
long long int var_17 = -2854620769102012823LL;
unsigned long long int var_18 = 1629917932023252895ULL;
int var_19 = -1389885981;
int var_20 = 1418197939;
int var_21 = 1062515510;
unsigned char var_22 = (unsigned char)227;
unsigned long long int var_23 = 7580116484937008205ULL;
unsigned long long int var_24 = 486855307271240224ULL;
unsigned char var_25 = (unsigned char)169;
unsigned int var_26 = 4118218252U;
_Bool var_27 = (_Bool)0;
unsigned int var_28 = 3824789547U;
unsigned long long int arr_0 [15] ;
int arr_1 [15] ;
unsigned int arr_4 [12] ;
short arr_8 [12] [12] [12] [12] ;
long long int arr_9 [12] [12] [12] ;
long long int arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 6277772494235688939ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 28185966;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 3757334326U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)-28256;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -5978303824760655120LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 7313699996039523844LL;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
