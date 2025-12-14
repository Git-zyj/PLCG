#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
short var_2 = (short)-27668;
unsigned short var_5 = (unsigned short)13612;
unsigned long long int var_7 = 2791070841099109181ULL;
unsigned long long int var_11 = 15231013995850274003ULL;
unsigned short var_14 = (unsigned short)37788;
signed char var_16 = (signed char)-89;
unsigned short var_17 = (unsigned short)39485;
signed char var_18 = (signed char)-60;
int zero = 0;
unsigned short var_20 = (unsigned short)32894;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-20885;
unsigned char arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)213 : (unsigned char)151;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
