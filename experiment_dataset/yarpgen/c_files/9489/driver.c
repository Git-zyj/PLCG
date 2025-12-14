#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3701339838430938833LL;
signed char var_1 = (signed char)-104;
unsigned long long int var_2 = 13835077554771715362ULL;
unsigned long long int var_3 = 966602868196154245ULL;
int var_4 = -1895102312;
unsigned int var_5 = 1615053158U;
int var_7 = -119675347;
unsigned long long int var_8 = 14377654719146235614ULL;
unsigned long long int var_9 = 2921423106694626593ULL;
unsigned char var_10 = (unsigned char)57;
short var_11 = (short)-22932;
short var_12 = (short)6357;
unsigned int var_13 = 1847443250U;
unsigned short var_14 = (unsigned short)5170;
signed char var_15 = (signed char)-91;
unsigned char var_16 = (unsigned char)28;
signed char var_17 = (signed char)111;
unsigned char var_18 = (unsigned char)141;
int zero = 0;
unsigned short var_19 = (unsigned short)26039;
int var_20 = -726562672;
unsigned short var_21 = (unsigned short)44521;
unsigned long long int var_22 = 12298958577968811741ULL;
unsigned char var_23 = (unsigned char)188;
unsigned int var_24 = 1527360061U;
unsigned char var_25 = (unsigned char)49;
int var_26 = -307427772;
unsigned char var_27 = (unsigned char)249;
short var_28 = (short)-8055;
signed char arr_11 [18] ;
unsigned char arr_22 [16] [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)11 : (signed char)96;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (unsigned char)81 : (unsigned char)26;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
