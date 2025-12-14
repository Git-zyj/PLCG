#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 610207166;
unsigned short var_4 = (unsigned short)10949;
long long int var_6 = -4532679452698687611LL;
long long int var_8 = -5905331106729125243LL;
unsigned short var_10 = (unsigned short)34268;
unsigned short var_11 = (unsigned short)8965;
long long int var_13 = 8421240294001179910LL;
int zero = 0;
unsigned long long int var_14 = 8522918634921938768ULL;
unsigned short var_15 = (unsigned short)56062;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 5676607751578525923ULL;
unsigned int var_18 = 3310136106U;
unsigned int arr_3 [11] ;
unsigned char arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 934254706U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)200;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
