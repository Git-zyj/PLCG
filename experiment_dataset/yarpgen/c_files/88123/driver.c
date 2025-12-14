#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5486511091168180647LL;
unsigned char var_1 = (unsigned char)125;
unsigned char var_2 = (unsigned char)207;
int var_3 = -1718110735;
unsigned long long int var_4 = 2825587073649959961ULL;
unsigned short var_5 = (unsigned short)20893;
unsigned long long int var_6 = 8660137102331964312ULL;
long long int var_7 = -3449473581604421834LL;
long long int var_8 = -3156007008069856170LL;
signed char var_9 = (signed char)47;
unsigned char var_10 = (unsigned char)141;
unsigned char var_11 = (unsigned char)95;
long long int var_12 = 732198525951894759LL;
unsigned char var_13 = (unsigned char)54;
short var_14 = (short)28452;
unsigned long long int var_15 = 8109718406259047071ULL;
signed char var_16 = (signed char)-114;
unsigned short var_17 = (unsigned short)65333;
int var_18 = -914865175;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-83;
long long int var_22 = 4005639946706652753LL;
unsigned long long int var_23 = 185644798651703460ULL;
signed char var_24 = (signed char)-89;
unsigned char var_25 = (unsigned char)113;
signed char var_26 = (signed char)-84;
signed char var_27 = (signed char)-120;
signed char var_28 = (signed char)92;
_Bool var_29 = (_Bool)0;
unsigned long long int var_30 = 12215542253736097870ULL;
unsigned short var_31 = (unsigned short)28312;
long long int var_32 = 8741223837720085047LL;
signed char arr_11 [19] ;
short arr_23 [19] ;
unsigned short arr_33 [19] [19] ;
signed char arr_34 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (short)-27908 : (short)-6718;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_33 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)28183 : (unsigned short)12676;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)113 : (signed char)-29;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
