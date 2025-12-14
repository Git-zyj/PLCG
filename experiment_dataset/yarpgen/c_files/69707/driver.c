#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)229;
long long int var_2 = -8254123321533880968LL;
long long int var_3 = 635633369138233641LL;
unsigned long long int var_4 = 15129847845736155491ULL;
unsigned char var_7 = (unsigned char)99;
unsigned long long int var_8 = 11236307805170986105ULL;
long long int var_9 = -5464466545596380692LL;
long long int var_10 = 853717791067116199LL;
unsigned long long int var_11 = 4166308909674927ULL;
int zero = 0;
unsigned long long int var_12 = 9350354260710543079ULL;
long long int var_13 = 3439173156620488193LL;
unsigned char var_14 = (unsigned char)143;
unsigned char var_15 = (unsigned char)38;
long long int var_16 = -2611536495335675972LL;
unsigned long long int var_17 = 15971710431320759366ULL;
unsigned char var_18 = (unsigned char)203;
long long int arr_4 [11] ;
unsigned long long int arr_5 [11] [11] ;
unsigned long long int arr_6 [11] ;
long long int arr_9 [24] ;
unsigned long long int arr_12 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1132249334274078356LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 3235110525445698307ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 13346672969208810624ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = -2883158262014421647LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 6061565105347226276ULL : 12675209342185170121ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
