#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = -8048722218314437640LL;
short var_3 = (short)-26919;
short var_6 = (short)-7192;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 2320169912986791089ULL;
long long int var_13 = 6653757978500580732LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_17 = -5968952982311350300LL;
short var_18 = (short)-28738;
signed char var_19 = (signed char)30;
unsigned char var_20 = (unsigned char)199;
unsigned long long int var_21 = 1602871753022268943ULL;
unsigned char var_22 = (unsigned char)156;
short var_23 = (short)-26001;
unsigned char arr_1 [21] [21] ;
signed char arr_2 [21] ;
unsigned long long int arr_3 [24] ;
unsigned short arr_6 [24] ;
long long int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)82 : (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 3324680888438032902ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)53875 : (unsigned short)54933;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -4720900080753496348LL : -1867392427166106861LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
