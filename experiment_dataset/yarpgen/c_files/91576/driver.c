#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4085802797334189029ULL;
short var_1 = (short)29556;
unsigned long long int var_2 = 5624953927358360917ULL;
signed char var_9 = (signed char)110;
unsigned int var_10 = 3658952265U;
unsigned long long int var_12 = 5691789734085955048ULL;
int zero = 0;
unsigned long long int var_13 = 8270035051108122261ULL;
unsigned char var_14 = (unsigned char)203;
unsigned int var_15 = 981830773U;
long long int var_16 = -4866213955955922212LL;
long long int var_17 = 8042396542354298782LL;
_Bool var_18 = (_Bool)1;
long long int var_19 = 8149997568580820964LL;
signed char var_20 = (signed char)-23;
unsigned int arr_0 [23] ;
int arr_1 [23] [23] ;
unsigned long long int arr_8 [20] ;
signed char arr_9 [20] [20] ;
unsigned char arr_10 [20] [20] ;
unsigned long long int arr_2 [23] ;
unsigned short arr_3 [23] ;
signed char arr_7 [17] ;
int arr_12 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 4082098662U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = -650366073;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 8020300368350065776ULL : 3502178726805697006ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-56 : (signed char)52;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)121 : (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 15643209458009264831ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)34820;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-74 : (signed char)52;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 1750299585 : -1562607990;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
