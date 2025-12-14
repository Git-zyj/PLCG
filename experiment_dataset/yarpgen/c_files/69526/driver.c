#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-64;
signed char var_2 = (signed char)-94;
signed char var_3 = (signed char)-72;
unsigned int var_4 = 803532922U;
unsigned long long int var_7 = 16456431131013127613ULL;
int var_11 = 747519791;
unsigned char var_12 = (unsigned char)177;
int zero = 0;
unsigned short var_13 = (unsigned short)10471;
unsigned int var_14 = 1130986011U;
int var_15 = 1674493133;
unsigned int var_16 = 2805359226U;
unsigned int var_17 = 3233603561U;
unsigned int var_18 = 143846505U;
unsigned short var_19 = (unsigned short)847;
unsigned int var_20 = 1673965223U;
long long int var_21 = -8014902934236190163LL;
unsigned short arr_0 [21] ;
unsigned short arr_1 [21] [21] ;
unsigned char arr_2 [21] [21] [21] ;
unsigned short arr_3 [21] [21] ;
unsigned int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)18579;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)28796;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)53676;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 827340465U : 3659854652U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
