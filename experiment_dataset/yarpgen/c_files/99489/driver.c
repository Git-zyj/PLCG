#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4080254728358945655LL;
long long int var_2 = 5497304914769145055LL;
signed char var_3 = (signed char)62;
short var_4 = (short)27444;
short var_5 = (short)19352;
_Bool var_8 = (_Bool)1;
int var_10 = 433228766;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = -1218411570;
signed char var_15 = (signed char)88;
signed char var_16 = (signed char)39;
unsigned char var_17 = (unsigned char)49;
int var_18 = -1341861197;
short var_19 = (short)19581;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
short var_22 = (short)6929;
long long int arr_0 [24] ;
long long int arr_2 [24] ;
long long int arr_9 [20] [20] ;
unsigned short arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 740879337461647015LL : -2422256364374129110LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 1770400442129883908LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? -6452346258219294329LL : 1394446754292995083LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)51423 : (unsigned short)64267;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
