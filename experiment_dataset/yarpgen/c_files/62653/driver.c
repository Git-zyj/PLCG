#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6225381043887243608ULL;
unsigned long long int var_1 = 6085119567819082767ULL;
int var_2 = 156890700;
int var_3 = 2056076514;
int var_5 = -1574675272;
int var_7 = 1305706599;
unsigned int var_11 = 231484243U;
int var_13 = -712579072;
int var_14 = 983292451;
unsigned long long int var_15 = 18096284410927910786ULL;
unsigned long long int var_16 = 9921659289631055633ULL;
signed char var_18 = (signed char)-38;
int zero = 0;
unsigned long long int var_20 = 14674634924352630580ULL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 10442672527076421745ULL;
short var_23 = (short)25845;
_Bool var_24 = (_Bool)1;
short var_25 = (short)23406;
signed char var_26 = (signed char)-69;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)100;
int var_29 = -323618993;
short var_30 = (short)-31391;
unsigned char var_31 = (unsigned char)89;
int var_32 = 684160393;
unsigned char var_33 = (unsigned char)255;
short var_34 = (short)16482;
signed char var_35 = (signed char)67;
signed char var_36 = (signed char)-70;
signed char var_37 = (signed char)-47;
signed char var_38 = (signed char)116;
unsigned char var_39 = (unsigned char)119;
long long int var_40 = 5260199711242429456LL;
short var_41 = (short)25654;
int var_42 = -678852103;
int var_43 = -1063163995;
int var_44 = 1680219314;
unsigned int var_45 = 1968489515U;
int var_46 = 893751830;
int var_47 = -1661157572;
int var_48 = 1796439978;
unsigned int var_49 = 3472539886U;
unsigned short arr_1 [15] ;
int arr_5 [15] [15] [15] ;
signed char arr_7 [15] [15] [15] ;
unsigned long long int arr_15 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)64460;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 733783972;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 10928468577457708134ULL;
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
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
