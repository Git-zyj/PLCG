#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13361369643829820076ULL;
unsigned long long int var_2 = 9749436818662795355ULL;
unsigned long long int var_5 = 15960008460290691988ULL;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 2651028347U;
int var_20 = -1634193109;
unsigned short var_21 = (unsigned short)40919;
short var_22 = (short)28048;
unsigned short var_23 = (unsigned short)32788;
unsigned int arr_0 [16] [16] ;
_Bool arr_1 [16] ;
long long int arr_2 [16] ;
int arr_6 [19] [19] ;
int arr_9 [19] ;
unsigned long long int arr_3 [16] ;
unsigned int arr_4 [16] ;
unsigned short arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 761517127U : 2751522186U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 8422547456943712387LL : 8078516325460508223LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = -788933141;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = -858230948;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 6996845345105018612ULL : 5763467507249896714ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3206745940U : 4182134704U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)23297 : (unsigned short)10680;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
