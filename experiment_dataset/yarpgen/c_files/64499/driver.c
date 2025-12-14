#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3181472768U;
unsigned short var_1 = (unsigned short)39803;
unsigned int var_3 = 1410818982U;
long long int var_5 = 8005130372213662716LL;
unsigned long long int var_6 = 2017834247824049932ULL;
unsigned int var_8 = 903804740U;
unsigned long long int var_10 = 7397102552633573379ULL;
unsigned int var_15 = 1389847835U;
int zero = 0;
signed char var_17 = (signed char)-32;
unsigned long long int var_18 = 14617310108262565084ULL;
int var_19 = 1370048405;
unsigned short var_20 = (unsigned short)19419;
unsigned short var_21 = (unsigned short)16016;
short var_22 = (short)-24106;
short var_23 = (short)-7422;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
short var_26 = (short)-2622;
unsigned short var_27 = (unsigned short)12193;
_Bool arr_1 [18] ;
unsigned int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 2324895131U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
