#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1742018104;
int var_1 = 1502342909;
int var_3 = 1124664592;
signed char var_4 = (signed char)-27;
unsigned int var_5 = 3971153491U;
unsigned long long int var_6 = 9294691955265512743ULL;
long long int var_7 = -3012841307729852092LL;
short var_8 = (short)3377;
unsigned char var_9 = (unsigned char)108;
long long int var_10 = -6724528706714597370LL;
short var_11 = (short)-30025;
int zero = 0;
int var_12 = 984042498;
unsigned char var_13 = (unsigned char)37;
short var_14 = (short)-4892;
unsigned char var_15 = (unsigned char)94;
unsigned int var_16 = 1427495763U;
signed char arr_0 [25] [25] ;
unsigned char arr_1 [25] [25] ;
long long int arr_2 [25] [25] ;
long long int arr_3 [25] [25] [25] ;
signed char arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 5289685714426933747LL : 8357723810273928667LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3018351384987108681LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)73 : (signed char)-92;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
