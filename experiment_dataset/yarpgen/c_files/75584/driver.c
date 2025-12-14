#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
long long int var_2 = -2520427427566929292LL;
long long int var_3 = 1716259778863867559LL;
unsigned short var_6 = (unsigned short)12414;
unsigned char var_10 = (unsigned char)229;
unsigned char var_11 = (unsigned char)235;
unsigned char var_13 = (unsigned char)8;
unsigned char var_14 = (unsigned char)254;
unsigned char var_15 = (unsigned char)104;
long long int var_17 = -5274978636981667090LL;
int zero = 0;
unsigned short var_18 = (unsigned short)51502;
unsigned char var_19 = (unsigned char)63;
unsigned char var_20 = (unsigned char)93;
unsigned char var_21 = (unsigned char)25;
unsigned short var_22 = (unsigned short)34058;
unsigned long long int var_23 = 9827137109060215068ULL;
unsigned char var_24 = (unsigned char)13;
unsigned char var_25 = (unsigned char)70;
unsigned char var_26 = (unsigned char)115;
unsigned long long int arr_0 [17] [17] ;
unsigned char arr_1 [17] [17] ;
unsigned char arr_2 [17] [17] ;
unsigned long long int arr_6 [17] ;
unsigned long long int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 3815738438772691263ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 8595917210791531206ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 16860248219815105066ULL : 16044328657494049922ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
