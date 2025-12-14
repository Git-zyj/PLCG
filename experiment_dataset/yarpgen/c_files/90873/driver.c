#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
long long int var_1 = -2485346437018368856LL;
signed char var_2 = (signed char)-71;
short var_3 = (short)19127;
unsigned long long int var_4 = 2095141351612283089ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)25082;
signed char var_8 = (signed char)123;
signed char var_9 = (signed char)-79;
unsigned int var_11 = 2268543665U;
unsigned char var_12 = (unsigned char)234;
unsigned short var_13 = (unsigned short)28362;
unsigned short var_14 = (unsigned short)18424;
short var_16 = (short)-1791;
int zero = 0;
unsigned short var_17 = (unsigned short)32306;
short var_18 = (short)-29961;
long long int arr_3 [24] ;
short arr_4 [24] ;
signed char arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 5141953877378778450LL : -5346919235087890624LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-22162 : (short)-26680;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)15 : (signed char)-121;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
