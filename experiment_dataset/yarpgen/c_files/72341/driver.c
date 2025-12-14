#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-107;
long long int var_8 = 4918260829853232917LL;
unsigned long long int var_9 = 13735079636719853196ULL;
unsigned short var_10 = (unsigned short)21454;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)251;
unsigned char var_17 = (unsigned char)51;
unsigned short var_18 = (unsigned short)55342;
int var_19 = 717039019;
short var_20 = (short)12416;
_Bool var_21 = (_Bool)0;
int var_22 = -135985817;
int arr_0 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -2105184674;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
