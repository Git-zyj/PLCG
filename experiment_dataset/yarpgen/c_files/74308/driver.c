#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-13;
_Bool var_6 = (_Bool)1;
long long int var_8 = 7830653876716301417LL;
signed char var_9 = (signed char)-72;
long long int var_10 = -6443374487525072380LL;
short var_12 = (short)16312;
int zero = 0;
int var_13 = 286241748;
unsigned int var_14 = 2006621124U;
short var_15 = (short)850;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)90;
long long int var_18 = -2441785313387126907LL;
_Bool var_19 = (_Bool)1;
unsigned long long int arr_0 [19] [19] ;
short arr_1 [19] ;
unsigned long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 7994421691987477916ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)32427;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 4202493183540148521ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
