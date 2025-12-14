#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -292349088075817508LL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-15959;
unsigned long long int var_8 = 15379568280773009732ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 14429347986885967331ULL;
int zero = 0;
long long int var_13 = 2942324683049762462LL;
unsigned long long int var_14 = 10347285354438291310ULL;
int var_15 = 1897065405;
signed char var_16 = (signed char)104;
unsigned short var_17 = (unsigned short)34772;
unsigned char var_18 = (unsigned char)173;
unsigned char arr_1 [15] ;
signed char arr_3 [15] ;
signed char arr_5 [15] ;
int arr_6 [15] ;
unsigned long long int arr_9 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 1215370293;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 842747406115024972ULL : 3002989587344564031ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
