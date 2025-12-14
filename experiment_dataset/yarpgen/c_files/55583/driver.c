#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1448859566;
unsigned long long int var_12 = 15680623621720310951ULL;
int var_14 = 1477811042;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 2870916218243430195ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)78;
int var_19 = 1095131687;
unsigned long long int var_20 = 6314945124955893647ULL;
int var_21 = -843226993;
int var_22 = -1275458318;
int var_23 = -1395699356;
unsigned long long int var_24 = 6102445467104330770ULL;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)40;
int var_27 = -1213291806;
int arr_0 [22] ;
int arr_1 [22] ;
unsigned char arr_2 [22] ;
unsigned char arr_3 [11] ;
_Bool arr_4 [11] [11] ;
unsigned long long int arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -1161394971;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 843870861;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)7 : (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 7817451773694918361ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
