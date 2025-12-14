#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2533358750U;
unsigned short var_1 = (unsigned short)49435;
long long int var_2 = 7471144411074517800LL;
unsigned int var_4 = 449357214U;
signed char var_5 = (signed char)-32;
long long int var_6 = -2860714372875796715LL;
unsigned int var_9 = 1444587029U;
signed char var_11 = (signed char)120;
int zero = 0;
unsigned int var_13 = 3054367559U;
int var_14 = 1231043644;
long long int var_15 = -6290540624601643542LL;
long long int var_16 = -458466176704203899LL;
unsigned int var_17 = 2660799555U;
unsigned int arr_2 [18] ;
long long int arr_3 [18] [18] ;
unsigned long long int arr_4 [18] [18] [18] ;
long long int arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1634740135U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 9172309466591691347LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 16070759235588649910ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -3848097965198243296LL : 1279669400723725839LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
