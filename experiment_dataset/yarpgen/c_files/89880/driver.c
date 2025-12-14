#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1221814405;
unsigned long long int var_4 = 16673901313170838785ULL;
_Bool var_6 = (_Bool)1;
long long int var_8 = -416500935998041242LL;
unsigned char var_9 = (unsigned char)170;
long long int var_15 = 8144143280980869980LL;
signed char var_16 = (signed char)-80;
int zero = 0;
int var_19 = 1902640027;
signed char var_20 = (signed char)111;
long long int var_21 = 2627603558677322918LL;
unsigned int var_22 = 1743192211U;
long long int var_23 = 2082542763293828428LL;
unsigned char var_24 = (unsigned char)36;
short var_25 = (short)3147;
short var_26 = (short)27061;
unsigned int var_27 = 861438393U;
unsigned short var_28 = (unsigned short)14767;
short var_29 = (short)-8545;
unsigned int var_30 = 4182430181U;
unsigned int var_31 = 2530155172U;
long long int var_32 = -805550599492778333LL;
_Bool var_33 = (_Bool)1;
long long int var_34 = 1503519584642303166LL;
unsigned int var_35 = 1646848788U;
unsigned short var_36 = (unsigned short)1606;
long long int var_37 = 4100843787845893640LL;
long long int var_38 = -8146432687196593805LL;
unsigned char arr_3 [18] ;
unsigned int arr_11 [18] ;
long long int arr_28 [16] ;
short arr_33 [16] [16] [16] [16] [16] ;
unsigned int arr_34 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 3531851639U : 1492688532U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? -5793433574006675968LL : 8741035289038308746LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)15490 : (short)-21959;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? 317525155U : 1733825450U;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
