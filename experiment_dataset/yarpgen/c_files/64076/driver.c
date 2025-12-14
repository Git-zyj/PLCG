#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7305714152522314382LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_10 = 12246707279922662421ULL;
unsigned short var_11 = (unsigned short)42565;
unsigned short var_12 = (unsigned short)9345;
int zero = 0;
unsigned long long int var_14 = 16318706814524607055ULL;
unsigned long long int var_15 = 13634210684136783812ULL;
signed char var_16 = (signed char)-113;
unsigned char var_17 = (unsigned char)38;
long long int var_18 = 8657817959692695104LL;
long long int arr_0 [22] ;
unsigned char arr_2 [22] [22] ;
unsigned short arr_3 [22] ;
unsigned short arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -5837222143817926295LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)23945;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)19932;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
