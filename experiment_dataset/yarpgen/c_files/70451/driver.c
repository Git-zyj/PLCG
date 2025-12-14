#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15799222577910395455ULL;
long long int var_1 = 341588741298735340LL;
unsigned long long int var_3 = 13096018985474028697ULL;
long long int var_10 = -2612024679357297377LL;
long long int var_11 = 3120731391075792264LL;
long long int var_14 = 4658041243189108050LL;
int zero = 0;
long long int var_18 = 2010878771439347599LL;
unsigned long long int var_19 = 8505278316829465917ULL;
long long int var_20 = -8925419678608235860LL;
long long int var_21 = -3204627473254384782LL;
unsigned long long int var_22 = 2524887162908264709ULL;
unsigned long long int var_23 = 16973817948086042659ULL;
unsigned long long int var_24 = 17805699399949756529ULL;
unsigned int var_25 = 2970898413U;
unsigned long long int arr_0 [24] ;
unsigned long long int arr_1 [24] ;
long long int arr_3 [16] ;
unsigned long long int arr_4 [16] ;
long long int arr_7 [16] ;
unsigned int arr_2 [24] [24] ;
unsigned long long int arr_5 [16] ;
long long int arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 9994711433900804507ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 7227708496233624018ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -7622426961137153717LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 7911084409613162805ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = -7048522240926159512LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 2796298402U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 13311624595706987796ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 5810125400279397960LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
