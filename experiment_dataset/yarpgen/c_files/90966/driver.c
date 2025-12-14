#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18351765708480430385ULL;
_Bool var_1 = (_Bool)0;
long long int var_4 = 7981331543390541277LL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)245;
_Bool var_10 = (_Bool)1;
int var_11 = 295914757;
int zero = 0;
signed char var_12 = (signed char)-21;
long long int var_13 = 9060064262925072976LL;
long long int var_14 = -5226515243600556861LL;
signed char var_15 = (signed char)41;
unsigned char var_16 = (unsigned char)43;
unsigned short arr_2 [25] [25] ;
_Bool arr_4 [25] [25] [25] [25] ;
long long int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)16824;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -5715630258979624958LL : -3471366301179876264LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
