#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4050166239U;
unsigned char var_8 = (unsigned char)36;
unsigned short var_12 = (unsigned short)15382;
unsigned char var_13 = (unsigned char)35;
int zero = 0;
unsigned char var_16 = (unsigned char)19;
unsigned long long int var_17 = 17972367670586325546ULL;
unsigned short var_18 = (unsigned short)6705;
unsigned int var_19 = 1459522430U;
unsigned long long int arr_0 [11] ;
unsigned char arr_2 [11] ;
long long int arr_3 [11] [11] ;
unsigned int arr_8 [25] [25] ;
unsigned int arr_4 [11] ;
unsigned int arr_5 [11] ;
unsigned long long int arr_6 [11] ;
long long int arr_9 [25] ;
unsigned short arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 2359894055354967611ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 6866718648012740527LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 192462745U : 287784067U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1296192835U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 3025458908U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 1606714446287518951ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 4685385000629904072LL : -5068620032946332620LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)8176 : (unsigned short)48470;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
