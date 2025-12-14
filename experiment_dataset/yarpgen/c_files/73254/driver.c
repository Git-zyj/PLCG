#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)68;
short var_1 = (short)-3380;
long long int var_2 = -63162317272677938LL;
unsigned int var_3 = 1346951502U;
int var_4 = -2138979089;
unsigned char var_6 = (unsigned char)218;
unsigned int var_7 = 3609347142U;
int var_9 = 1315656358;
int var_10 = 99334662;
int var_11 = -309116331;
unsigned long long int var_12 = 8736285433955124823ULL;
int var_13 = 1336672716;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3427963055U;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -1099981143;
int var_18 = 1045066642;
unsigned int var_19 = 2451933011U;
unsigned int var_20 = 3232363021U;
unsigned long long int var_21 = 18163498171287776456ULL;
unsigned long long int var_22 = 2857142850865343183ULL;
unsigned int var_23 = 2407437361U;
long long int var_24 = -5760761873066399509LL;
signed char var_25 = (signed char)-14;
long long int var_26 = -282492577461963249LL;
unsigned long long int arr_0 [13] [13] ;
unsigned long long int arr_2 [13] ;
signed char arr_5 [18] ;
short arr_6 [22] ;
short arr_7 [22] ;
unsigned long long int arr_9 [22] [22] [22] ;
long long int arr_15 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 8203141480614015041ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 3710445321293037617ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (short)-14215;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (short)17130;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 14273310438227446415ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? -4232003981192887624LL : 6342007973241503803LL;
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
