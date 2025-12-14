#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 786201161;
unsigned int var_2 = 2029324806U;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-10042;
unsigned char var_6 = (unsigned char)183;
signed char var_7 = (signed char)-2;
unsigned long long int var_8 = 17905101685361488377ULL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 6580441314001465045ULL;
long long int var_15 = -4000385318728731771LL;
_Bool var_16 = (_Bool)1;
unsigned short var_18 = (unsigned short)45026;
int zero = 0;
unsigned char var_19 = (unsigned char)2;
unsigned long long int var_20 = 7921009036643211899ULL;
signed char var_21 = (signed char)37;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)185;
int arr_0 [14] ;
long long int arr_3 [14] [14] [14] ;
_Bool arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1070257147 : 817152328;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -5483015200316726958LL : 4769362013348548311LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
