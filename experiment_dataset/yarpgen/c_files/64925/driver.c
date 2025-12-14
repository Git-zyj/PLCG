#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7340;
unsigned char var_2 = (unsigned char)142;
long long int var_3 = 8103914795239952612LL;
signed char var_5 = (signed char)-45;
unsigned char var_7 = (unsigned char)192;
short var_10 = (short)-22497;
short var_11 = (short)18752;
int zero = 0;
long long int var_12 = 232157453574417994LL;
int var_13 = -837236590;
signed char var_14 = (signed char)25;
long long int var_15 = -1102190778455736838LL;
unsigned char arr_2 [11] [11] ;
unsigned char arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)151;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
