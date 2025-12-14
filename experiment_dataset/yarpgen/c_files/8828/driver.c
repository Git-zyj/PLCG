#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2276140557U;
long long int var_3 = -4936918322827963087LL;
long long int var_4 = 7985601041695193230LL;
unsigned char var_5 = (unsigned char)83;
unsigned char var_6 = (unsigned char)157;
_Bool var_9 = (_Bool)0;
unsigned int var_12 = 4207284383U;
unsigned short var_16 = (unsigned short)43812;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)20;
unsigned short var_19 = (unsigned short)3547;
signed char var_20 = (signed char)17;
unsigned char var_21 = (unsigned char)43;
long long int var_22 = 6866910404902218317LL;
int var_23 = -1779637441;
unsigned short var_24 = (unsigned short)49686;
long long int arr_0 [21] ;
unsigned int arr_1 [21] [21] ;
int arr_5 [14] ;
signed char arr_6 [14] [14] ;
unsigned long long int arr_17 [14] [14] [14] [14] ;
long long int arr_18 [14] [14] ;
_Bool arr_2 [21] [21] ;
long long int arr_22 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 2335597765090750949LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 4162081814U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 2049771663;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 9294142423043062114ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 1315349940845881967LL : -512308289097358004LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 7146904112090813355LL : 2187966701433493860LL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
