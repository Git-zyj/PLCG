#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14901830084215489072ULL;
unsigned long long int var_1 = 956601779249673800ULL;
unsigned long long int var_2 = 7546818430444415495ULL;
unsigned char var_6 = (unsigned char)230;
unsigned char var_7 = (unsigned char)150;
short var_8 = (short)26795;
short var_9 = (short)2916;
unsigned char var_12 = (unsigned char)48;
short var_13 = (short)-2580;
unsigned long long int var_14 = 5943545210534827697ULL;
int zero = 0;
unsigned long long int var_15 = 12463307310906316569ULL;
short var_16 = (short)-15366;
short var_17 = (short)-29041;
short var_18 = (short)-6712;
unsigned char arr_5 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned char)16;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
