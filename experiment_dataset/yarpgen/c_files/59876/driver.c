#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)175;
_Bool var_3 = (_Bool)0;
int var_6 = 2025238761;
int var_8 = 1556985212;
unsigned short var_10 = (unsigned short)38667;
unsigned long long int var_12 = 7661855297236882711ULL;
unsigned short var_13 = (unsigned short)21636;
int zero = 0;
unsigned short var_14 = (unsigned short)64245;
unsigned long long int var_15 = 1932854477974306605ULL;
int var_16 = -1426687362;
int var_17 = 1887355573;
int var_18 = 2136754367;
short var_19 = (short)-19349;
int var_20 = -1674214861;
unsigned long long int var_21 = 6816234162289755977ULL;
unsigned int var_22 = 3126067503U;
_Bool var_23 = (_Bool)1;
unsigned char arr_1 [19] ;
unsigned char arr_3 [19] [19] ;
int arr_5 [18] ;
short arr_6 [18] ;
long long int arr_8 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1921543071 : -742683788;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)8416 : (short)-21821;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 7466993689512057917LL : 5783862166306529701LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
