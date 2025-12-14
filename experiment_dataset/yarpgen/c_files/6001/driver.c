#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7503573669498812049ULL;
unsigned long long int var_1 = 13125242040033423423ULL;
unsigned long long int var_2 = 12681659614830049257ULL;
unsigned long long int var_3 = 15856037067662139326ULL;
unsigned long long int var_4 = 13418907258402103582ULL;
unsigned long long int var_5 = 227834732514424035ULL;
_Bool var_6 = (_Bool)0;
short var_8 = (short)-11275;
unsigned long long int var_9 = 8472340617371277124ULL;
int zero = 0;
short var_10 = (short)-9707;
long long int var_11 = 7758813110543609324LL;
short var_12 = (short)-1070;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 1668785996288088765ULL;
unsigned long long int var_15 = 1199206884433071500ULL;
unsigned long long int var_16 = 5435607743953035442ULL;
long long int var_17 = -2330524927813438104LL;
short var_18 = (short)23956;
long long int var_19 = -125273149399939761LL;
short var_20 = (short)19681;
unsigned long long int arr_0 [16] ;
long long int arr_1 [16] ;
unsigned long long int arr_2 [16] ;
short arr_4 [13] [13] ;
long long int arr_5 [17] ;
unsigned long long int arr_6 [17] ;
short arr_8 [17] [17] ;
unsigned long long int arr_13 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 7818515043121862438ULL : 11705332501923527311ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 7008302937145662824LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 17538803352260723537ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)16968 : (short)12755;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = -2195707287173838750LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 6611152799199699322ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (short)15763;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 8865515693263759730ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
