#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 775571041059440081LL;
int var_2 = -1811528086;
unsigned short var_3 = (unsigned short)3901;
unsigned int var_4 = 847345031U;
unsigned long long int var_5 = 17900951326008108308ULL;
int var_10 = -1533111012;
int zero = 0;
int var_12 = -1280623608;
unsigned long long int var_13 = 11068986996813904307ULL;
unsigned long long int var_14 = 18276942804962477727ULL;
unsigned int arr_4 [18] ;
_Bool arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 3009828079U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
