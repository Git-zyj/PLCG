#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-26;
long long int var_1 = -6457366851641063362LL;
signed char var_2 = (signed char)63;
long long int var_3 = 4179194802554095290LL;
_Bool var_6 = (_Bool)0;
int var_8 = 1248021575;
unsigned short var_10 = (unsigned short)34804;
long long int var_11 = 2923292351470369478LL;
unsigned short var_13 = (unsigned short)21140;
unsigned long long int var_14 = 5471014353854271412ULL;
long long int var_15 = 8941388143944597807LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)29650;
unsigned short var_18 = (unsigned short)40845;
short var_19 = (short)22240;
signed char var_20 = (signed char)4;
unsigned long long int var_21 = 13557025882593648674ULL;
int var_22 = 757099198;
short var_23 = (short)-20820;
unsigned short var_24 = (unsigned short)8562;
short arr_2 [20] ;
unsigned char arr_3 [20] [20] [20] ;
unsigned long long int arr_9 [20] [20] [20] [20] [20] ;
_Bool arr_10 [20] [20] [20] [20] [20] [20] [20] ;
unsigned long long int arr_11 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)-14310;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 16623104077992433456ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = 2329059074477475592ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
