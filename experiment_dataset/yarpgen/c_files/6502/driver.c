#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7724487584741353317LL;
unsigned char var_1 = (unsigned char)176;
unsigned long long int var_2 = 15875049747351475606ULL;
long long int var_3 = 8691853421354224615LL;
signed char var_4 = (signed char)26;
unsigned long long int var_5 = 14152138968017693169ULL;
signed char var_7 = (signed char)7;
long long int var_9 = -5760911860803429947LL;
unsigned long long int var_10 = 1455594796958355998ULL;
unsigned char var_11 = (unsigned char)145;
unsigned char var_12 = (unsigned char)97;
int var_13 = -636081059;
unsigned short var_14 = (unsigned short)18080;
unsigned char var_15 = (unsigned char)79;
long long int var_16 = -4448724111655563287LL;
long long int var_17 = 2859004252950732768LL;
unsigned long long int var_18 = 17155262752234501382ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -2695249639032964674LL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)14659;
int var_23 = 2044520970;
long long int var_24 = -123926746790537618LL;
short var_25 = (short)-30880;
int var_26 = -1698550946;
long long int var_27 = 7640274818034641281LL;
signed char var_28 = (signed char)-39;
signed char var_29 = (signed char)-53;
int var_30 = -1565725186;
int arr_1 [21] ;
signed char arr_4 [21] ;
signed char arr_5 [21] [21] [21] ;
long long int arr_8 [21] [21] [21] [21] [21] ;
unsigned short arr_11 [21] [21] ;
_Bool arr_14 [22] ;
short arr_16 [22] [22] [22] ;
unsigned char arr_22 [22] ;
signed char arr_25 [22] [22] [22] ;
unsigned short arr_26 [22] [22] [22] ;
unsigned long long int arr_2 [21] ;
long long int arr_9 [21] ;
long long int arr_12 [21] ;
_Bool arr_15 [22] ;
short arr_19 [22] ;
unsigned short arr_20 [22] ;
unsigned short arr_24 [22] ;
signed char arr_27 [22] ;
unsigned short arr_28 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1379037981;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-10 : (signed char)-8;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = -3481094920853887834LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)47158 : (unsigned short)52956;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)21253 : (short)-14552;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-37 : (signed char)30;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned short)10864;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 14033015635261307378ULL : 5171127065510528657ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -1061127916186052393LL : 5126284604675029139LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 3072894665865108941LL : 5161708132319893515LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (short)8438 : (short)6095;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned short)32256 : (unsigned short)26631;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13760 : (unsigned short)60110;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (signed char)-65 : (signed char)-62;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)8068 : (unsigned short)37041;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
