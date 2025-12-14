#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 343240209;
short var_2 = (short)-1280;
_Bool var_3 = (_Bool)0;
long long int var_4 = 6582324122051699857LL;
unsigned int var_8 = 4091382577U;
signed char var_9 = (signed char)-111;
unsigned int var_10 = 531188722U;
long long int var_14 = 5073576862986538843LL;
int zero = 0;
long long int var_17 = -1868297704477217178LL;
int var_18 = 405741618;
unsigned int var_19 = 2022760659U;
int var_20 = 1605695184;
short var_21 = (short)-28586;
int arr_0 [12] ;
long long int arr_4 [12] ;
long long int arr_10 [12] [12] [12] [12] ;
unsigned long long int arr_11 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1323789554 : -912159167;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -2631487703882543011LL : 4169760249322424095LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -169717228428860853LL : 5710852284363053411LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 11235856142056349993ULL : 4112356389892227103ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
