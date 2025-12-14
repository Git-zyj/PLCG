#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4566581386719682013LL;
short var_8 = (short)24776;
short var_9 = (short)12380;
long long int var_12 = 4221322952545888541LL;
short var_15 = (short)-22074;
signed char var_16 = (signed char)15;
short var_17 = (short)-16257;
signed char var_18 = (signed char)36;
int zero = 0;
signed char var_20 = (signed char)36;
short var_21 = (short)20982;
long long int var_22 = -9031243763649538528LL;
short var_23 = (short)16382;
signed char var_24 = (signed char)-26;
signed char var_25 = (signed char)127;
long long int var_26 = -2140938109328449501LL;
long long int var_27 = 377055367229942040LL;
short arr_0 [15] ;
short arr_1 [15] [15] ;
short arr_2 [15] ;
long long int arr_6 [17] [17] ;
long long int arr_3 [15] ;
signed char arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)-5092;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-10284;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)18539;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 5841099871962376990LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 8058768349846048372LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (signed char)-84;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
