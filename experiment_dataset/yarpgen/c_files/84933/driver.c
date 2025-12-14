#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 427845260U;
unsigned short var_4 = (unsigned short)5531;
unsigned int var_5 = 193825005U;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 3683089245306664024ULL;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)41481;
unsigned short var_13 = (unsigned short)11190;
unsigned int var_15 = 2454062409U;
unsigned long long int var_16 = 4747860535838075186ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)45018;
unsigned long long int var_18 = 13940973357783178067ULL;
unsigned int var_19 = 1331378079U;
unsigned short var_20 = (unsigned short)5677;
unsigned short arr_0 [21] [21] ;
unsigned long long int arr_1 [21] ;
unsigned long long int arr_2 [21] [21] ;
unsigned short arr_3 [21] ;
unsigned long long int arr_4 [21] ;
long long int arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)36246;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 3069784091998243232ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 2883557764087471208ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)61726;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 9414133328667276992ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 3955845563934746589LL : 1879516756513500653LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
