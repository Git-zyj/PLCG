#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1921022620;
long long int var_6 = -1970400719296944779LL;
unsigned int var_7 = 3979930366U;
int var_8 = -1600427706;
unsigned char var_10 = (unsigned char)141;
unsigned char var_11 = (unsigned char)89;
short var_12 = (short)19485;
int zero = 0;
unsigned char var_13 = (unsigned char)181;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-22644;
unsigned char var_16 = (unsigned char)128;
unsigned char var_17 = (unsigned char)80;
unsigned long long int arr_0 [18] ;
unsigned short arr_2 [18] ;
unsigned long long int arr_3 [18] [18] ;
long long int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 13703774042349271726ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)44492;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 1356106017649039273ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 39421792809483335LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
