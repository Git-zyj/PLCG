#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6085085705255993265ULL;
unsigned long long int var_1 = 1764033982736096665ULL;
signed char var_2 = (signed char)-96;
signed char var_4 = (signed char)62;
unsigned long long int var_7 = 9779224815918234729ULL;
unsigned long long int var_10 = 3999952857206234190ULL;
unsigned long long int var_11 = 6348768323132125688ULL;
unsigned long long int var_12 = 14163552329651969079ULL;
unsigned long long int var_13 = 15211367292590616508ULL;
signed char var_15 = (signed char)-26;
signed char var_17 = (signed char)39;
signed char var_18 = (signed char)-32;
signed char var_19 = (signed char)-98;
int zero = 0;
unsigned long long int var_20 = 11536983507744474333ULL;
unsigned long long int var_21 = 2525981466119407055ULL;
unsigned long long int var_22 = 851129095664958961ULL;
unsigned long long int var_23 = 12008208708469119564ULL;
signed char var_24 = (signed char)-53;
signed char var_25 = (signed char)-85;
signed char var_26 = (signed char)126;
unsigned long long int var_27 = 4413502500809278210ULL;
signed char var_28 = (signed char)35;
unsigned long long int var_29 = 15720368619931176632ULL;
unsigned long long int var_30 = 4376929680080517545ULL;
unsigned long long int var_31 = 673537936464099126ULL;
unsigned long long int var_32 = 6163645892183305278ULL;
unsigned long long int var_33 = 6013974079221474486ULL;
unsigned long long int arr_0 [15] [15] ;
unsigned long long int arr_1 [15] ;
unsigned long long int arr_2 [18] ;
signed char arr_3 [18] ;
unsigned long long int arr_4 [18] [18] ;
unsigned long long int arr_7 [11] ;
unsigned long long int arr_8 [11] ;
unsigned long long int arr_11 [11] [11] ;
unsigned long long int arr_17 [11] [11] ;
unsigned long long int arr_5 [18] ;
signed char arr_6 [18] ;
unsigned long long int arr_13 [11] [11] [11] ;
signed char arr_14 [11] [11] ;
unsigned long long int arr_15 [11] [11] ;
signed char arr_18 [11] [11] ;
unsigned long long int arr_21 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 2277408232927111731ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 13498704024068057103ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 9693856824412839936ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 7589726400898991598ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 12184733902647162524ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 9338747182906688116ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = 7158545224672389211ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = 16157302276677960958ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 1795270610705429968ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 17136788939948562206ULL : 10653695396773943738ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)36 : (signed char)102;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 1565182377819105302ULL : 12358718718988966518ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_18 [i_0] [i_1] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 14147713930407607725ULL : 8227788308222323027ULL;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
