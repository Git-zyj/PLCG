#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46473;
long long int var_2 = 6428910483689196421LL;
unsigned char var_4 = (unsigned char)11;
unsigned short var_5 = (unsigned short)46428;
long long int var_11 = 2978910664281380340LL;
unsigned char var_17 = (unsigned char)21;
int zero = 0;
unsigned int var_20 = 1126134585U;
int var_21 = 153787429;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)103;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)252;
unsigned char var_26 = (unsigned char)138;
unsigned short arr_0 [12] ;
long long int arr_2 [12] [12] ;
long long int arr_3 [12] [12] ;
int arr_5 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)9822;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 5563056673712903102LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = -6218975479985804886LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -623675590;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
