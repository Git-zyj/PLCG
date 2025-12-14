#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)106;
unsigned long long int var_5 = 16894887759759202877ULL;
unsigned long long int var_6 = 16848214176590405125ULL;
signed char var_10 = (signed char)105;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 990128275998207910LL;
signed char var_14 = (signed char)-124;
int var_15 = 1880480862;
unsigned long long int var_16 = 5138155850282858977ULL;
unsigned long long int var_17 = 9535177365311255187ULL;
int var_18 = 1157922461;
long long int var_19 = -3529021435274726865LL;
unsigned char var_20 = (unsigned char)191;
_Bool var_21 = (_Bool)0;
long long int var_22 = 5910375806990039849LL;
unsigned long long int arr_3 [11] [11] ;
unsigned char arr_7 [18] [18] ;
unsigned int arr_8 [18] [18] ;
long long int arr_11 [18] ;
long long int arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 3255242939179547173ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 4124752236U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = -5428931771537893711LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 2965915919154650082LL : 7512865632441733976LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
