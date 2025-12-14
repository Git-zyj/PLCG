#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)215;
short var_1 = (short)16886;
unsigned long long int var_2 = 18250412497190951779ULL;
short var_3 = (short)-21268;
unsigned char var_4 = (unsigned char)138;
unsigned int var_6 = 3422797878U;
unsigned char var_7 = (unsigned char)146;
unsigned short var_8 = (unsigned short)1703;
long long int var_9 = 5397961552369424386LL;
unsigned long long int var_10 = 428567398333911620ULL;
int zero = 0;
unsigned long long int var_11 = 14063579291203387173ULL;
unsigned long long int var_12 = 5813786050860478257ULL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 1909379760971399360ULL;
_Bool var_15 = (_Bool)0;
_Bool arr_0 [24] ;
short arr_1 [24] ;
unsigned long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)-5299;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 17670204918120798495ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
