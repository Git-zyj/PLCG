#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1310740081;
int var_4 = -971550209;
long long int var_5 = 3645053739782586584LL;
unsigned short var_9 = (unsigned short)48270;
int var_13 = 1380289752;
int zero = 0;
long long int var_18 = -7555629588523470260LL;
int var_19 = 120380255;
int var_20 = 2140983216;
long long int var_21 = 4748458025569867718LL;
signed char var_22 = (signed char)15;
int var_23 = -1227925434;
int var_24 = 961648902;
signed char arr_2 [13] ;
long long int arr_6 [16] ;
int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = -1530944511931908728LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 1876615590;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
