#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)51083;
signed char var_5 = (signed char)-16;
int var_6 = 1391918409;
long long int var_10 = 7599007907834585950LL;
unsigned short var_13 = (unsigned short)31596;
int var_14 = -1773987510;
int zero = 0;
unsigned int var_19 = 2142524963U;
_Bool var_20 = (_Bool)0;
long long int var_21 = -582274999421058349LL;
short var_22 = (short)-6177;
long long int var_23 = -8352368302545741441LL;
int var_24 = 985466682;
int var_25 = -1433731691;
short arr_1 [11] ;
long long int arr_3 [11] ;
unsigned long long int arr_5 [11] [11] [11] ;
unsigned long long int arr_14 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)-27038;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -4663805505410909713LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 6433762390510661583ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = 10452729748280273067ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
