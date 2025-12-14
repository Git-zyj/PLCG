#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)216;
signed char var_1 = (signed char)-90;
unsigned char var_2 = (unsigned char)175;
unsigned char var_3 = (unsigned char)107;
unsigned char var_5 = (unsigned char)108;
signed char var_6 = (signed char)90;
unsigned char var_7 = (unsigned char)122;
unsigned long long int var_8 = 10058284281565712364ULL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 17215266327884429158ULL;
unsigned char var_13 = (unsigned char)197;
long long int var_14 = 4220097664332526734LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 1554103508493682069LL;
unsigned int var_18 = 111911478U;
unsigned char var_19 = (unsigned char)75;
int var_20 = -38952386;
unsigned long long int arr_0 [13] ;
long long int arr_3 [13] ;
unsigned char arr_7 [13] [13] ;
unsigned long long int arr_4 [13] ;
signed char arr_8 [13] [13] [13] ;
unsigned char arr_9 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1181771661764491047ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -5463937482586985720LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)3 : (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 8036230640835063941ULL : 2392239530360744391ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-29 : (signed char)102;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)244 : (unsigned char)164;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
