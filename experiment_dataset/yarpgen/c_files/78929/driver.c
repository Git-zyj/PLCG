#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3267391739U;
unsigned long long int var_1 = 7742175839454516214ULL;
short var_2 = (short)4039;
long long int var_3 = 4942668421595355892LL;
_Bool var_4 = (_Bool)0;
long long int var_5 = -3625926413311224224LL;
short var_6 = (short)-29956;
unsigned long long int var_9 = 8732896938877026628ULL;
int zero = 0;
unsigned int var_10 = 725691491U;
long long int var_11 = 2933598895689700788LL;
short var_12 = (short)-13044;
unsigned int var_13 = 3412764075U;
unsigned long long int var_14 = 9076761403464937097ULL;
signed char var_15 = (signed char)-53;
unsigned short var_16 = (unsigned short)14405;
unsigned char arr_16 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)46 : (unsigned char)237;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
