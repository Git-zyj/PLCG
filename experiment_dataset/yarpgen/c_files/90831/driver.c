#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)189;
signed char var_1 = (signed char)82;
short var_6 = (short)14416;
unsigned char var_7 = (unsigned char)14;
unsigned int var_8 = 2966115156U;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)61333;
unsigned short var_11 = (unsigned short)14214;
unsigned int var_12 = 3486223322U;
signed char var_14 = (signed char)-74;
int zero = 0;
unsigned char var_17 = (unsigned char)87;
unsigned long long int var_18 = 5081708243873148480ULL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)155;
_Bool arr_2 [17] [17] ;
unsigned int arr_4 [17] [17] [17] ;
unsigned long long int arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3200437791U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 11459850072742313169ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
