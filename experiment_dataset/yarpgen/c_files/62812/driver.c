#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3265578449782500308LL;
signed char var_1 = (signed char)-77;
int var_3 = -1235225100;
long long int var_4 = -6072071644708628323LL;
long long int var_5 = -3755567762228871507LL;
signed char var_7 = (signed char)-122;
int var_10 = 197656233;
long long int var_11 = 9058210071680017043LL;
int var_12 = 1720645340;
long long int var_15 = -3024311059769986008LL;
signed char var_17 = (signed char)-66;
int var_18 = 1772518139;
long long int var_19 = 1267979434020062236LL;
int zero = 0;
long long int var_20 = 9129870760102859490LL;
signed char var_21 = (signed char)-56;
signed char var_22 = (signed char)-126;
long long int var_23 = 7944273772367541773LL;
long long int var_24 = 1253022099189320602LL;
signed char var_25 = (signed char)2;
int arr_2 [12] ;
signed char arr_3 [12] [12] ;
int arr_4 [12] [12] [12] ;
long long int arr_6 [12] [12] [12] ;
signed char arr_7 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 305227960;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-87 : (signed char)51;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1400860673 : 15155030;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7317137748192733537LL : 811959439928259982LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-100 : (signed char)29;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
