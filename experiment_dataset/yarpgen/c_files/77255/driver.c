#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
unsigned char var_1 = (unsigned char)242;
signed char var_2 = (signed char)-127;
unsigned int var_3 = 1929425942U;
int var_4 = 518499533;
unsigned char var_6 = (unsigned char)254;
short var_8 = (short)-11770;
signed char var_9 = (signed char)-96;
short var_11 = (short)-28307;
int var_13 = 169615617;
unsigned int var_15 = 3920174268U;
unsigned int var_16 = 2865592940U;
unsigned char var_17 = (unsigned char)219;
unsigned long long int var_18 = 11333724629863643334ULL;
long long int var_19 = -6674151534586855714LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 328228046;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-70;
int var_24 = 82906881;
signed char var_25 = (signed char)-6;
int var_26 = 1979693179;
signed char var_27 = (signed char)116;
signed char var_28 = (signed char)-114;
short var_29 = (short)19475;
unsigned int arr_2 [15] ;
unsigned long long int arr_6 [15] [15] ;
long long int arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 3867093917U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 11165533068593568029ULL : 14800184133449991459ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 6437298432727893337LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
