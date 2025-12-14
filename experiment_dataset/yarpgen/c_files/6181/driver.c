#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
long long int var_1 = -20565427516808440LL;
unsigned int var_2 = 900066700U;
signed char var_3 = (signed char)73;
unsigned char var_9 = (unsigned char)222;
long long int var_10 = -268319792846728981LL;
_Bool var_13 = (_Bool)1;
int var_15 = 647488742;
unsigned char var_16 = (unsigned char)180;
long long int var_17 = 7013415357998338660LL;
unsigned long long int var_18 = 4138275116982028447ULL;
unsigned long long int var_19 = 12141690086815757910ULL;
int zero = 0;
int var_20 = 1353477913;
short var_21 = (short)18097;
short var_22 = (short)4544;
unsigned char var_23 = (unsigned char)145;
long long int var_24 = -8325014411096545859LL;
unsigned char var_25 = (unsigned char)90;
unsigned long long int var_26 = 11156100014983886803ULL;
unsigned char var_27 = (unsigned char)54;
short var_28 = (short)-22326;
unsigned char var_29 = (unsigned char)241;
int var_30 = 811388611;
unsigned char arr_1 [22] ;
signed char arr_2 [22] [22] [22] ;
short arr_4 [22] ;
unsigned int arr_6 [22] [22] [22] [22] [22] ;
signed char arr_7 [22] [22] [22] [22] [22] ;
unsigned char arr_8 [22] ;
unsigned char arr_12 [22] [22] [22] ;
long long int arr_15 [14] ;
unsigned short arr_18 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)33 : (signed char)106;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)-17904;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] = 3207484631U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)12 : (signed char)88;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)226 : (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = -7744242311292105188LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = (unsigned short)59188;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
