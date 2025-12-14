#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1600565380906519751LL;
unsigned long long int var_2 = 12932516246644959741ULL;
unsigned long long int var_8 = 11355351785244539054ULL;
unsigned long long int var_11 = 18294409927322796091ULL;
int zero = 0;
unsigned long long int var_16 = 15401401136422897776ULL;
long long int var_17 = 983964455512803761LL;
long long int var_18 = 2938476058568422866LL;
long long int var_19 = 3007610922083819566LL;
unsigned long long int var_20 = 9821608632563009271ULL;
unsigned long long int var_21 = 9419172843571357354ULL;
unsigned long long int var_22 = 62696265847596886ULL;
unsigned long long int var_23 = 8325407929554806115ULL;
unsigned long long int arr_0 [10] ;
unsigned long long int arr_2 [10] ;
unsigned long long int arr_3 [10] ;
long long int arr_6 [10] ;
unsigned long long int arr_7 [10] [10] ;
unsigned long long int arr_4 [10] [10] ;
unsigned long long int arr_5 [10] ;
long long int arr_14 [10] ;
unsigned long long int arr_15 [10] [10] [10] [10] ;
unsigned long long int arr_16 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 4885565281684210442ULL : 11891116792952901571ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 10271592782563073088ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 17518333225033524679ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -8649825370695380037LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = 2185444660993114851ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 10388890824297085857ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 15982796494305298031ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = -2822808983201464601LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 2991809593314515357ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = 2885016819626998330ULL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
