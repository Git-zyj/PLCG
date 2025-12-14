#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
unsigned short var_1 = (unsigned short)42823;
unsigned short var_2 = (unsigned short)25749;
unsigned int var_3 = 3220889612U;
unsigned short var_4 = (unsigned short)51756;
unsigned long long int var_5 = 778279125370650729ULL;
long long int var_6 = -7988576335956421782LL;
signed char var_7 = (signed char)-49;
unsigned int var_8 = 3779476225U;
unsigned short var_9 = (unsigned short)56615;
unsigned int var_10 = 3200963153U;
unsigned int var_11 = 2603494401U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)255;
unsigned char var_14 = (unsigned char)186;
unsigned short var_15 = (unsigned short)46497;
long long int var_16 = 2433331823914471877LL;
unsigned short var_17 = (unsigned short)29379;
long long int var_18 = -2851665924071324506LL;
int var_19 = -1650497493;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 5610697425649562474ULL;
unsigned long long int var_22 = 6991223748933347176ULL;
long long int var_23 = -8584745891725788231LL;
long long int var_24 = 5572411169802151362LL;
long long int arr_17 [17] [17] [17] [17] [17] [17] ;
unsigned short arr_29 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 2964785383358921895LL : -1821343147808685058LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)36018 : (unsigned short)7020;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
