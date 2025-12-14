#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14840204023164059577ULL;
unsigned long long int var_5 = 7295646712148627648ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)28117;
unsigned char var_20 = (unsigned char)171;
unsigned long long int var_21 = 12848306731910948646ULL;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-116;
unsigned int var_24 = 2595911695U;
signed char var_25 = (signed char)-100;
short var_26 = (short)-12958;
unsigned int var_27 = 628156951U;
short var_28 = (short)-19698;
unsigned short arr_0 [10] [10] ;
unsigned int arr_2 [10] ;
short arr_5 [10] [10] ;
short arr_14 [17] ;
signed char arr_15 [17] ;
unsigned short arr_16 [17] ;
_Bool arr_17 [17] [17] ;
unsigned long long int arr_20 [17] [17] ;
unsigned long long int arr_24 [17] [17] [17] [17] [17] ;
long long int arr_26 [17] [17] ;
unsigned short arr_27 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)33065 : (unsigned short)22556;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 32585025U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-10069;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (short)12373;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (unsigned short)49069;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_20 [i_0] [i_1] = 16113403236690963019ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 16649836847268284437ULL : 8601168645319863255ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_26 [i_0] [i_1] = (i_0 % 2 == 0) ? -2849739830823657114LL : 7614013957704413509LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)59369 : (unsigned short)29840;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
