#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28139;
short var_4 = (short)-14948;
short var_5 = (short)-18657;
long long int var_8 = 6016733023237731960LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 5827790391423988951ULL;
unsigned long long int var_13 = 10651635620331895137ULL;
int zero = 0;
signed char var_15 = (signed char)-97;
short var_16 = (short)-29311;
unsigned char var_17 = (unsigned char)53;
signed char var_18 = (signed char)79;
signed char var_19 = (signed char)-23;
unsigned char var_20 = (unsigned char)129;
signed char var_21 = (signed char)-27;
unsigned short var_22 = (unsigned short)62684;
unsigned long long int var_23 = 118177865973680185ULL;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 3569774963U;
unsigned long long int var_26 = 10965102024187131310ULL;
unsigned char var_27 = (unsigned char)175;
unsigned long long int var_28 = 963922265807481099ULL;
unsigned char var_29 = (unsigned char)70;
_Bool var_30 = (_Bool)0;
unsigned int arr_0 [18] ;
signed char arr_1 [18] [18] ;
short arr_2 [18] ;
unsigned char arr_3 [16] ;
long long int arr_4 [16] [16] ;
long long int arr_5 [16] [16] ;
unsigned long long int arr_7 [25] ;
unsigned int arr_9 [25] ;
unsigned long long int arr_10 [13] ;
unsigned short arr_12 [13] ;
unsigned int arr_15 [13] [13] ;
unsigned char arr_17 [13] ;
unsigned int arr_18 [13] [13] [13] [13] ;
unsigned long long int arr_21 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 423937940U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)20873;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 6683468740462306948LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = -1493587451391247885LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 8732644419459265938ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 1962803391U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = 9792334022285360414ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (unsigned short)10873;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = 215072482U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 2210222643U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 15134218174781961174ULL : 1754131666713804489ULL;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
