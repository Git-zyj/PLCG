#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)115;
int var_4 = 300824214;
unsigned int var_5 = 2077425834U;
unsigned short var_6 = (unsigned short)21047;
unsigned char var_7 = (unsigned char)205;
int var_8 = -80846533;
int var_9 = -142978882;
unsigned char var_12 = (unsigned char)46;
int var_15 = 69892913;
int zero = 0;
unsigned char var_17 = (unsigned char)15;
unsigned int var_18 = 2430227428U;
unsigned int var_19 = 1271498892U;
signed char var_20 = (signed char)-68;
unsigned int var_21 = 270831840U;
unsigned int arr_0 [17] ;
int arr_1 [17] ;
unsigned int arr_2 [17] [17] [17] ;
unsigned char arr_5 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1595194355U : 3415384031U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -560850421;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2453750165U : 3056330209U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)248 : (unsigned char)145;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
