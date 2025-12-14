#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1815198823U;
unsigned int var_2 = 1534090616U;
short var_3 = (short)26784;
unsigned int var_5 = 1760303451U;
signed char var_7 = (signed char)8;
signed char var_8 = (signed char)-87;
unsigned long long int var_11 = 12858757991028898431ULL;
unsigned short var_12 = (unsigned short)39445;
short var_13 = (short)-4927;
short var_14 = (short)28790;
short var_16 = (short)-3862;
long long int var_17 = 5213299442403385629LL;
int var_19 = -1379998266;
int zero = 0;
unsigned long long int var_20 = 10366998267605121401ULL;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)2;
unsigned long long int var_23 = 262419139062405379ULL;
signed char var_24 = (signed char)42;
unsigned int var_25 = 2068382095U;
signed char var_26 = (signed char)12;
long long int var_27 = -5121222963762991642LL;
unsigned short var_28 = (unsigned short)49246;
unsigned long long int var_29 = 14938655212696346803ULL;
unsigned int var_30 = 883012066U;
short var_31 = (short)-14744;
short var_32 = (short)-28789;
int arr_0 [17] ;
short arr_1 [17] ;
long long int arr_2 [17] ;
signed char arr_3 [17] [17] ;
_Bool arr_4 [17] [17] ;
signed char arr_7 [25] ;
short arr_6 [17] ;
unsigned int arr_10 [25] [25] ;
unsigned long long int arr_13 [10] ;
unsigned short arr_14 [10] ;
unsigned int arr_22 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 571976230;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)2059;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 8072613587218255215LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-118 : (signed char)23;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (short)-13499;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 3621869502U : 620510376U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = 1455432361714414168ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (unsigned short)43683;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = 536572017U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
