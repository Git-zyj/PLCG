#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1453826831U;
unsigned int var_3 = 1417195655U;
unsigned short var_5 = (unsigned short)62345;
int zero = 0;
long long int var_19 = -7475308622783816044LL;
signed char var_20 = (signed char)-75;
unsigned long long int var_21 = 17943937390325352836ULL;
signed char var_22 = (signed char)-14;
unsigned char var_23 = (unsigned char)33;
unsigned short var_24 = (unsigned short)38102;
unsigned int var_25 = 500725981U;
long long int arr_0 [17] ;
unsigned short arr_2 [17] ;
unsigned long long int arr_4 [17] [17] ;
short arr_5 [17] ;
unsigned long long int arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 5372932438714332590LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)57891;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 2563378953143805567ULL : 6350876922793510518ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-19096 : (short)9916;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 5862917480768998159ULL : 9671373301565434396ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
