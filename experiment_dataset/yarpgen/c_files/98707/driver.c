#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4413;
unsigned char var_3 = (unsigned char)149;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-21946;
signed char var_9 = (signed char)77;
unsigned char var_12 = (unsigned char)14;
int var_13 = -1437392605;
unsigned char var_14 = (unsigned char)5;
int zero = 0;
unsigned long long int var_15 = 8391402434594586524ULL;
unsigned char var_16 = (unsigned char)12;
int var_17 = -1343635499;
unsigned int var_18 = 1998402555U;
short var_19 = (short)-7077;
unsigned char var_20 = (unsigned char)93;
short var_21 = (short)22707;
unsigned int var_22 = 3030585794U;
unsigned char var_23 = (unsigned char)181;
unsigned char var_24 = (unsigned char)110;
unsigned char var_25 = (unsigned char)207;
unsigned short var_26 = (unsigned short)58597;
unsigned long long int var_27 = 16450803088105921434ULL;
unsigned char arr_2 [11] ;
short arr_3 [11] ;
unsigned int arr_7 [11] [11] [11] ;
long long int arr_11 [11] ;
long long int arr_12 [18] [18] ;
_Bool arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-23568;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 874385030U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = 8376500791995743391LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = 4902510098501697083LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
