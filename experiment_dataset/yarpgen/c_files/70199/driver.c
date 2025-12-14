#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60040;
short var_3 = (short)6580;
unsigned long long int var_8 = 17928062604297040126ULL;
unsigned short var_9 = (unsigned short)65363;
int var_11 = 287149080;
int var_12 = 1982437800;
unsigned int var_15 = 722341294U;
unsigned int var_16 = 280135452U;
int var_18 = 1170823426;
int zero = 0;
signed char var_19 = (signed char)-50;
unsigned long long int var_20 = 10553873960478005721ULL;
long long int var_21 = -2004500134315571231LL;
unsigned long long int var_22 = 7806974858298712369ULL;
long long int var_23 = -2319713588739464361LL;
unsigned short var_24 = (unsigned short)4683;
unsigned int var_25 = 1501003500U;
unsigned char var_26 = (unsigned char)48;
unsigned char var_27 = (unsigned char)210;
signed char var_28 = (signed char)62;
unsigned long long int var_29 = 15574908989898923250ULL;
int var_30 = 337886836;
unsigned long long int var_31 = 18393087195153525763ULL;
signed char arr_0 [17] [17] ;
unsigned int arr_1 [17] ;
unsigned char arr_4 [15] [15] ;
unsigned char arr_7 [15] [15] ;
unsigned int arr_9 [15] [15] [15] [15] ;
unsigned long long int arr_11 [15] [15] [15] [15] ;
unsigned long long int arr_2 [17] [17] ;
short arr_12 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 1313052512U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)233 : (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 221356708U : 365770360U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 11446708522431100364ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 14835229502612162325ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)-20192 : (short)-28554;
}

void checksum() {
    hash(&seed, var_19);
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
