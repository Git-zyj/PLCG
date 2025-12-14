#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 817563411;
unsigned long long int var_2 = 12687610801698567917ULL;
long long int var_3 = -6177683923413525365LL;
long long int var_4 = 7381954715082679064LL;
short var_5 = (short)-17962;
unsigned char var_8 = (unsigned char)123;
_Bool var_12 = (_Bool)0;
unsigned short var_15 = (unsigned short)15341;
int var_17 = 1995167832;
long long int var_18 = 3025989774614991642LL;
int zero = 0;
unsigned short var_20 = (unsigned short)59701;
signed char var_21 = (signed char)-58;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)53483;
signed char var_24 = (signed char)100;
long long int var_25 = 8048231931490040967LL;
unsigned char var_26 = (unsigned char)123;
short var_27 = (short)-12317;
signed char arr_0 [12] [12] ;
int arr_1 [12] [12] ;
long long int arr_2 [12] [12] ;
long long int arr_3 [12] ;
signed char arr_6 [17] ;
unsigned short arr_7 [17] [17] ;
unsigned char arr_8 [17] [17] ;
short arr_11 [17] ;
int arr_12 [17] [17] ;
signed char arr_13 [17] ;
signed char arr_14 [17] [17] ;
short arr_19 [17] [17] ;
unsigned short arr_20 [17] ;
signed char arr_4 [12] ;
unsigned int arr_5 [12] ;
short arr_9 [17] [17] ;
int arr_10 [17] ;
long long int arr_15 [17] [17] ;
_Bool arr_16 [17] ;
unsigned char arr_17 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -1976365896;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = -6537877172878191505LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = -167889199725523601LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)26771;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (short)-25880;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = 1429716546;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = (short)-31858;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = (unsigned short)17436;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 2063354560U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-17103;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 491335849;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = -311258690402747040LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)113;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
