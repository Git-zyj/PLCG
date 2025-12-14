#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6819639848523206682ULL;
short var_1 = (short)-18769;
unsigned int var_8 = 4203715063U;
short var_11 = (short)-27319;
unsigned short var_12 = (unsigned short)768;
unsigned long long int var_13 = 8407297656205543473ULL;
short var_15 = (short)26025;
int zero = 0;
unsigned long long int var_17 = 16418492999298774704ULL;
short var_18 = (short)20064;
unsigned short var_19 = (unsigned short)55904;
unsigned short var_20 = (unsigned short)33972;
unsigned char var_21 = (unsigned char)220;
short var_22 = (short)-25025;
unsigned long long int arr_0 [14] ;
unsigned char arr_2 [14] ;
unsigned long long int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 18027385705224917970ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 14124973487055058963ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
