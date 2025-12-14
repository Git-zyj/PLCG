#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1096134288;
unsigned short var_3 = (unsigned short)36054;
int var_4 = -156932159;
int var_5 = 1311817138;
int var_8 = 162204519;
unsigned char var_10 = (unsigned char)233;
int zero = 0;
signed char var_11 = (signed char)-29;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)23;
short var_14 = (short)-17055;
unsigned long long int var_15 = 7238117691329796459ULL;
signed char var_16 = (signed char)70;
short var_17 = (short)24303;
unsigned char var_18 = (unsigned char)195;
int var_19 = 662475648;
unsigned long long int var_20 = 16480894712834185621ULL;
unsigned int arr_0 [17] [17] ;
int arr_1 [17] [17] ;
unsigned char arr_2 [17] ;
unsigned int arr_5 [17] [17] ;
unsigned long long int arr_6 [17] [17] ;
int arr_8 [17] ;
short arr_16 [17] [17] [17] [17] [17] ;
_Bool arr_18 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 3126449765U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -1581814487;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 3443062732U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 6285089941923883937ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -1991683559;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-9602;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = (_Bool)0;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
