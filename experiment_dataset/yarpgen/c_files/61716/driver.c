#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1771334107;
unsigned char var_2 = (unsigned char)187;
unsigned int var_4 = 32790432U;
long long int var_9 = -8629017692007754505LL;
unsigned long long int var_10 = 14568420570520793679ULL;
signed char var_11 = (signed char)-118;
int var_13 = -1584234761;
signed char var_17 = (signed char)-93;
unsigned long long int var_19 = 1722539514257406474ULL;
int zero = 0;
signed char var_20 = (signed char)-92;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-105;
unsigned int arr_0 [11] ;
unsigned char arr_1 [11] ;
unsigned long long int arr_2 [11] ;
unsigned char arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 3092849573U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 11884157371823335082ULL : 9714459097011664802ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)154 : (unsigned char)128;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
