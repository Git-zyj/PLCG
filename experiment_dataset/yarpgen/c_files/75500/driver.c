#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16965;
unsigned int var_1 = 730376752U;
signed char var_4 = (signed char)57;
short var_5 = (short)-5250;
unsigned int var_6 = 2762876365U;
unsigned long long int var_9 = 3468814062426849ULL;
signed char var_11 = (signed char)119;
signed char var_12 = (signed char)-34;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)5726;
short var_15 = (short)1473;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-79;
short var_18 = (short)26845;
unsigned int var_19 = 1203634502U;
unsigned long long int var_20 = 14995659033947110379ULL;
unsigned long long int arr_4 [22] [22] [22] ;
int arr_8 [22] ;
unsigned char arr_17 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 15564977676557452556ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 999974304;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)125 : (unsigned char)136;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
