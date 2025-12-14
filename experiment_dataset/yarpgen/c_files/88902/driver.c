#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9797219020140051459ULL;
unsigned long long int var_6 = 6979385953915877706ULL;
unsigned long long int var_8 = 18146823450831621252ULL;
unsigned long long int var_14 = 12248275728538656095ULL;
unsigned long long int var_15 = 8086133483499063776ULL;
int zero = 0;
unsigned long long int var_19 = 4743199313805883778ULL;
unsigned long long int var_20 = 1936784593363748976ULL;
unsigned long long int var_21 = 3685097148847191323ULL;
unsigned long long int var_22 = 6463093822350841830ULL;
unsigned long long int var_23 = 2543190640864202340ULL;
unsigned long long int var_24 = 12172026469377138737ULL;
unsigned long long int var_25 = 15565503361630407936ULL;
unsigned long long int arr_0 [21] ;
unsigned long long int arr_1 [21] ;
unsigned long long int arr_4 [21] [21] ;
unsigned long long int arr_6 [21] [21] ;
unsigned long long int arr_7 [21] [21] [21] ;
unsigned long long int arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 17687256918322427353ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 11338839560814681424ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 16457836413983517405ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 4674451398038911355ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 14607467248944875150ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 14040397269069596411ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
