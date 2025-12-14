#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3546233361U;
unsigned char var_2 = (unsigned char)112;
int var_3 = 1479787664;
short var_4 = (short)12470;
unsigned int var_5 = 4167262026U;
signed char var_7 = (signed char)-5;
int var_8 = 1180183246;
int zero = 0;
unsigned char var_10 = (unsigned char)177;
unsigned char var_11 = (unsigned char)41;
long long int var_12 = 9012816851848913811LL;
unsigned short var_13 = (unsigned short)18989;
unsigned long long int var_14 = 2144998136437306326ULL;
unsigned int var_15 = 4183680621U;
signed char var_16 = (signed char)-41;
unsigned int var_17 = 969942807U;
unsigned int var_18 = 3272106705U;
int var_19 = 1774098916;
unsigned int var_20 = 1024697087U;
short var_21 = (short)-29789;
unsigned int arr_0 [24] ;
unsigned long long int arr_1 [24] ;
unsigned short arr_2 [24] [24] ;
unsigned char arr_11 [18] ;
signed char arr_9 [14] ;
unsigned char arr_10 [14] ;
unsigned short arr_13 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1464165585U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 13593744869365046972ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)11794;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)9209 : (unsigned short)25989;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
