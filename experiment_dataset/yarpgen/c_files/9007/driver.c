#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
unsigned char var_4 = (unsigned char)1;
unsigned short var_5 = (unsigned short)4951;
unsigned int var_12 = 2128325662U;
long long int var_13 = 2319266492681921437LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_16 = -794477906;
short var_17 = (short)-28171;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 2586170007564606187ULL;
unsigned int var_20 = 271256474U;
short var_21 = (short)-22705;
signed char var_22 = (signed char)85;
unsigned int arr_1 [17] ;
unsigned short arr_4 [17] ;
short arr_7 [24] ;
long long int arr_8 [24] [24] ;
short arr_2 [17] ;
unsigned char arr_5 [17] ;
unsigned char arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 891146662U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)48968;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (short)10045;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = -3478914091883556109LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)-32446;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)204;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
