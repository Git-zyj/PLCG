#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -998902722;
unsigned short var_1 = (unsigned short)62222;
short var_2 = (short)15361;
int var_3 = -1823476674;
_Bool var_5 = (_Bool)1;
int var_6 = -1657970524;
unsigned int var_7 = 1634838095U;
unsigned int var_8 = 2114058179U;
unsigned short var_9 = (unsigned short)34182;
unsigned long long int var_10 = 14251917128651262339ULL;
unsigned long long int var_11 = 3606998836496379882ULL;
unsigned int var_12 = 2262726540U;
unsigned short var_13 = (unsigned short)8143;
int zero = 0;
unsigned long long int var_14 = 17005821662068623405ULL;
int var_15 = -687594588;
unsigned short var_16 = (unsigned short)1888;
unsigned int var_17 = 1676875443U;
signed char var_18 = (signed char)-12;
unsigned long long int var_19 = 7816438884727960940ULL;
short var_20 = (short)6279;
unsigned long long int var_21 = 6894387111956654590ULL;
short var_22 = (short)-21827;
signed char var_23 = (signed char)-68;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 9161769348712812991ULL;
unsigned long long int var_26 = 16400023810556084456ULL;
unsigned long long int var_27 = 12653201734310992465ULL;
signed char var_28 = (signed char)-4;
unsigned int var_29 = 536147473U;
signed char var_30 = (signed char)32;
unsigned int var_31 = 2053405515U;
unsigned char var_32 = (unsigned char)177;
unsigned int var_33 = 219756671U;
long long int var_34 = -6833200595456732152LL;
unsigned long long int var_35 = 2448148557806574197ULL;
unsigned char var_36 = (unsigned char)106;
long long int var_37 = 8298794359406492842LL;
_Bool var_38 = (_Bool)0;
long long int var_39 = 4556152844688644928LL;
unsigned int var_40 = 3450485647U;
unsigned long long int var_41 = 12766923174116290611ULL;
_Bool var_42 = (_Bool)0;
unsigned int arr_6 [19] [19] [19] [19] ;
unsigned int arr_8 [19] [19] [19] [19] [19] [19] ;
unsigned int arr_13 [19] ;
unsigned int arr_16 [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 3842872239U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 504856808U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = 402522462U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 3503074045U;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
