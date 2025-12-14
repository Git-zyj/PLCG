#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1532721906;
unsigned int var_2 = 1351834516U;
long long int var_3 = -3184489419485788331LL;
unsigned short var_4 = (unsigned short)27836;
int var_5 = -876280699;
int var_6 = -1959639562;
long long int var_7 = -6060494007123801408LL;
unsigned int var_8 = 1637536521U;
int var_14 = -1813893036;
int var_16 = -1170190072;
int zero = 0;
long long int var_17 = 8034872202841497726LL;
unsigned char var_18 = (unsigned char)113;
int var_19 = 1587138950;
short var_20 = (short)17138;
long long int var_21 = 3984643241777026606LL;
short var_22 = (short)19279;
unsigned int var_23 = 2298460300U;
short var_24 = (short)-20777;
unsigned char var_25 = (unsigned char)16;
unsigned int var_26 = 1192165113U;
unsigned long long int var_27 = 15646417171281455435ULL;
unsigned int arr_3 [11] [11] ;
unsigned short arr_11 [11] [11] [11] [11] [11] [11] [11] ;
short arr_17 [14] [14] [14] ;
unsigned short arr_19 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 955683311U : 872372164U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)60655;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (short)-8727;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned short)48525;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
