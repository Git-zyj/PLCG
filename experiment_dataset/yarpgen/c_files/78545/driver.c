#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39593;
unsigned short var_3 = (unsigned short)30619;
long long int var_6 = -1510285615709330685LL;
unsigned short var_7 = (unsigned short)50089;
unsigned short var_8 = (unsigned short)14986;
unsigned long long int var_9 = 8487403608291810603ULL;
short var_11 = (short)-18138;
unsigned char var_13 = (unsigned char)101;
long long int var_15 = 1708970025120674953LL;
long long int var_16 = 8395224761970485305LL;
int zero = 0;
short var_17 = (short)20902;
long long int var_18 = 5361156448245035997LL;
long long int var_19 = 3860057255024901699LL;
short var_20 = (short)11997;
unsigned int var_21 = 4103923668U;
int arr_0 [18] ;
unsigned long long int arr_2 [18] ;
short arr_3 [18] ;
int arr_4 [18] ;
short arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -338283974 : 61398173;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 16590696712124810988ULL : 2800983752778340871ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)-21925;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1542351165 : 283457146;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-6243 : (short)22454;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
