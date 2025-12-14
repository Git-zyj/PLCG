#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2143;
signed char var_2 = (signed char)70;
signed char var_6 = (signed char)-16;
short var_7 = (short)-21302;
unsigned char var_9 = (unsigned char)49;
unsigned char var_13 = (unsigned char)117;
unsigned char var_14 = (unsigned char)228;
unsigned char var_15 = (unsigned char)18;
unsigned char var_16 = (unsigned char)190;
int zero = 0;
signed char var_17 = (signed char)90;
unsigned short var_18 = (unsigned short)20438;
signed char var_19 = (signed char)93;
short var_20 = (short)-10280;
signed char var_21 = (signed char)79;
signed char var_22 = (signed char)-67;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)164;
unsigned char var_25 = (unsigned char)12;
signed char var_26 = (signed char)-96;
short var_27 = (short)2480;
unsigned int var_28 = 3491387107U;
unsigned char var_29 = (unsigned char)150;
unsigned int arr_2 [21] ;
int arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 3177219694U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 544555404;
}

void checksum() {
    hash(&seed, var_17);
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
