#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)62;
int var_1 = -1614617816;
unsigned long long int var_2 = 2072731954432136060ULL;
long long int var_5 = 8031177315629512634LL;
unsigned char var_7 = (unsigned char)13;
unsigned short var_8 = (unsigned short)42146;
long long int var_9 = -3945680226116504720LL;
unsigned int var_12 = 1761459077U;
unsigned char var_13 = (unsigned char)122;
int zero = 0;
short var_14 = (short)27004;
int var_15 = 1831957953;
short var_16 = (short)27087;
signed char var_17 = (signed char)-38;
short var_18 = (short)-23106;
unsigned long long int var_19 = 10836460965314383404ULL;
unsigned int var_20 = 112983231U;
unsigned long long int var_21 = 6068733110088945541ULL;
int var_22 = 1632150220;
unsigned long long int var_23 = 13101682657014954848ULL;
unsigned int var_24 = 2169138299U;
unsigned short arr_1 [10] [10] ;
unsigned short arr_3 [10] ;
unsigned int arr_5 [10] ;
unsigned long long int arr_6 [10] [10] ;
short arr_8 [10] ;
signed char arr_9 [10] [10] [10] [10] ;
short arr_10 [12] ;
unsigned char arr_11 [12] [12] ;
_Bool arr_12 [12] ;
int arr_13 [12] ;
unsigned long long int arr_14 [17] ;
int arr_20 [17] [17] [17] [17] ;
_Bool arr_22 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)15738 : (unsigned short)24424;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)17144;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 4174423968U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 16176730835996839856ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-24614 : (short)24122;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (short)-17457;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 1846711282 : -659273976;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 191689362509241650ULL : 9408205317301649007ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 1885790373;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
