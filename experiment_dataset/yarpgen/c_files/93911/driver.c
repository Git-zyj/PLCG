#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-17056;
unsigned short var_2 = (unsigned short)3010;
long long int var_3 = -5908889553634153390LL;
int var_4 = 2048297199;
short var_6 = (short)2128;
long long int var_7 = 5044222685088784402LL;
signed char var_8 = (signed char)-63;
unsigned char var_9 = (unsigned char)20;
unsigned short var_10 = (unsigned short)33765;
unsigned long long int var_11 = 15420741866689276181ULL;
short var_12 = (short)-2552;
unsigned long long int var_13 = 6672633402098869480ULL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-67;
_Bool var_16 = (_Bool)0;
long long int var_17 = -6350988187760530700LL;
signed char var_18 = (signed char)98;
int var_19 = 1827127946;
int zero = 0;
long long int var_20 = -6035409997316211218LL;
int var_21 = 375875800;
unsigned char var_22 = (unsigned char)24;
short var_23 = (short)22443;
signed char var_24 = (signed char)23;
unsigned char var_25 = (unsigned char)40;
unsigned long long int var_26 = 8630694258244307776ULL;
unsigned short var_27 = (unsigned short)20108;
signed char var_28 = (signed char)120;
long long int var_29 = 5503030584979964413LL;
long long int var_30 = -7634681079099998007LL;
long long int var_31 = 123499632850024827LL;
signed char var_32 = (signed char)39;
unsigned long long int arr_11 [18] [18] [18] [18] ;
long long int arr_12 [18] [18] [18] [18] ;
signed char arr_13 [18] [18] [18] [18] ;
short arr_18 [18] [18] [18] ;
int arr_19 [18] ;
unsigned char arr_37 [15] ;
short arr_38 [15] ;
_Bool arr_43 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 5674223003795127013ULL : 11305200543626043292ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -7577515253579048820LL : -945554575305175370LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)63 : (signed char)67;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-22021 : (short)-22620;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? -1173967716 : -1111911459;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_37 [i_0] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_38 [i_0] = (short)30976;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_43 [i_0] = (_Bool)0;
}

void checksum() {
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
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_43 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
