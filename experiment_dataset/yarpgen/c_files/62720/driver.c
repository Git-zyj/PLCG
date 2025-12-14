#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 5704828289038070526LL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 6789696344998870892ULL;
unsigned short var_9 = (unsigned short)8939;
long long int var_14 = -7503548575453488342LL;
int zero = 0;
unsigned char var_17 = (unsigned char)12;
unsigned long long int var_18 = 8443137037611055753ULL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 7984306971491367246ULL;
unsigned int var_21 = 2491381906U;
int arr_2 [10] ;
unsigned int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1389559641;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 2099330107U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
