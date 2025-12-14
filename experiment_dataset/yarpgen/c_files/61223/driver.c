#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18569;
short var_2 = (short)10027;
long long int var_3 = -8811076259548728512LL;
unsigned int var_4 = 3919558795U;
long long int var_5 = 5884560585008526955LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 7538817966405684146ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 2536483360U;
int var_12 = 1366247585;
signed char var_13 = (signed char)-121;
short var_14 = (short)-8817;
unsigned short var_15 = (unsigned short)20525;
unsigned short var_16 = (unsigned short)60289;
signed char arr_0 [20] ;
short arr_1 [20] ;
short arr_3 [20] [20] ;
short arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)-3600;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (short)32453;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (short)7178;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
