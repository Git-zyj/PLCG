#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2198122989U;
unsigned long long int var_2 = 5550097172515325953ULL;
short var_3 = (short)-5414;
long long int var_7 = -2565431139707074685LL;
unsigned int var_9 = 1969677126U;
long long int var_13 = 4194454504207366032LL;
int zero = 0;
short var_14 = (short)8708;
int var_15 = -706127795;
signed char var_16 = (signed char)47;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)42327;
unsigned char var_19 = (unsigned char)26;
int arr_0 [17] ;
int arr_3 [17] ;
unsigned long long int arr_4 [17] ;
unsigned int arr_5 [17] [17] ;
unsigned short arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -1865108439;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 361429676;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 16533028163221706247ULL : 12150376680076812246ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 4079490392U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)26644 : (unsigned short)45660;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
