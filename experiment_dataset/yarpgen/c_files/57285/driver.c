#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 675516833U;
unsigned char var_2 = (unsigned char)149;
long long int var_3 = 4830209721119676564LL;
signed char var_5 = (signed char)-101;
long long int var_8 = 239136387055663048LL;
signed char var_10 = (signed char)-56;
int var_12 = -1112707459;
unsigned long long int var_13 = 14189263300343101640ULL;
unsigned char var_14 = (unsigned char)78;
int var_15 = 1917012198;
long long int var_16 = -1233373973352002682LL;
short var_18 = (short)26937;
unsigned long long int var_19 = 10660248567678018906ULL;
int zero = 0;
unsigned int var_20 = 1286244589U;
unsigned char var_21 = (unsigned char)100;
unsigned short var_22 = (unsigned short)34331;
signed char var_23 = (signed char)-37;
signed char var_24 = (signed char)93;
short var_25 = (short)9142;
_Bool var_26 = (_Bool)0;
signed char arr_13 [17] ;
unsigned char arr_6 [17] [17] [17] ;
int arr_15 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1248335609 : -819148814;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
