#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)117;
signed char var_6 = (signed char)-62;
unsigned int var_8 = 1238553359U;
unsigned short var_9 = (unsigned short)37502;
unsigned long long int var_10 = 12512601920046298707ULL;
int var_11 = -1472783025;
int zero = 0;
unsigned short var_20 = (unsigned short)4970;
unsigned short var_21 = (unsigned short)30562;
unsigned char var_22 = (unsigned char)230;
unsigned short var_23 = (unsigned short)27520;
_Bool var_24 = (_Bool)1;
signed char var_25 = (signed char)-114;
unsigned int var_26 = 1774236768U;
signed char arr_0 [22] ;
_Bool arr_2 [22] [22] [22] ;
unsigned long long int arr_3 [22] ;
unsigned long long int arr_4 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 2816899795057952039ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 6176251631830328961ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
