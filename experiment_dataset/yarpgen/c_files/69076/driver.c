#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8535082887047572395LL;
unsigned long long int var_3 = 16689071556080962721ULL;
signed char var_7 = (signed char)-8;
long long int var_9 = -5741948832162933398LL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 13914328552840703328ULL;
long long int var_15 = -666381666830313816LL;
unsigned short var_16 = (unsigned short)2249;
unsigned int var_17 = 160165453U;
int zero = 0;
unsigned long long int var_18 = 11627013424259768109ULL;
unsigned long long int var_19 = 3900682640477849238ULL;
unsigned long long int var_20 = 10182121170227655355ULL;
unsigned long long int var_21 = 14498126518113653595ULL;
_Bool var_22 = (_Bool)1;
long long int var_23 = -5558570929558182694LL;
unsigned long long int var_24 = 5643928621168675244ULL;
unsigned long long int var_25 = 9348607470362237884ULL;
unsigned long long int arr_0 [13] ;
unsigned long long int arr_1 [13] ;
long long int arr_2 [13] ;
unsigned long long int arr_3 [13] ;
long long int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 4251289648048065006ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 7923610406398399118ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -1556225132226388686LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 10759898710238514661ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -4094018873148560355LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
