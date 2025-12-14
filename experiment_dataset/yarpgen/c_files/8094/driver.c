#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5131035510531561727LL;
unsigned char var_3 = (unsigned char)178;
signed char var_4 = (signed char)-89;
long long int var_5 = -3707825218405408226LL;
unsigned long long int var_6 = 3441083282890784484ULL;
unsigned short var_7 = (unsigned short)37219;
unsigned long long int var_8 = 750916241132353382ULL;
short var_9 = (short)28141;
long long int var_10 = 1931924816125684815LL;
int zero = 0;
short var_11 = (short)13219;
unsigned short var_12 = (unsigned short)527;
signed char var_13 = (signed char)-25;
long long int var_14 = 8739516490820589018LL;
short arr_0 [12] ;
long long int arr_1 [12] ;
unsigned char arr_4 [12] ;
long long int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)14155;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 9191288928863657679LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 932719976070613991LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
