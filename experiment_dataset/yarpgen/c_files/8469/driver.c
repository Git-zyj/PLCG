#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1576100436;
int var_1 = 326755954;
short var_2 = (short)29940;
short var_3 = (short)-28150;
int var_4 = 2006702181;
int var_5 = 754843108;
signed char var_6 = (signed char)-31;
unsigned short var_7 = (unsigned short)2580;
unsigned long long int var_8 = 16763913709750449784ULL;
signed char var_9 = (signed char)14;
int var_10 = -28152322;
short var_11 = (short)-9703;
int zero = 0;
int var_12 = -319955728;
signed char var_13 = (signed char)103;
unsigned int var_14 = 3885205215U;
unsigned short var_15 = (unsigned short)23662;
unsigned long long int var_16 = 11832539636225928229ULL;
unsigned int var_17 = 1590847911U;
unsigned short var_18 = (unsigned short)61521;
unsigned short var_19 = (unsigned short)6635;
unsigned long long int var_20 = 4679406490413412804ULL;
signed char var_21 = (signed char)(-127 - 1);
unsigned int var_22 = 3802748543U;
unsigned long long int var_23 = 5422164874713413979ULL;
unsigned char arr_0 [17] [17] ;
short arr_1 [17] [17] ;
unsigned long long int arr_3 [17] ;
signed char arr_4 [17] [17] ;
unsigned long long int arr_5 [17] [17] ;
int arr_16 [24] ;
unsigned char arr_17 [24] ;
int arr_6 [17] ;
signed char arr_15 [17] [17] ;
unsigned char arr_18 [24] [24] ;
int arr_21 [24] ;
unsigned long long int arr_22 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (short)13713;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 13036287524185157893ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 7380319984580970711ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = -1471164928;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = -379285995;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)57 : (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 968657142 : 732281826;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? 14489035731321743801ULL : 11438602595812667088ULL;
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
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
